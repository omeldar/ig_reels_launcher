#include <windows.h>
#include <string>

// Check if any window contains "Instagram" in its title
BOOL CALLBACK EnumWindowsProc(HWND hwnd, LPARAM lParam) {
    char title[512];
    GetWindowTextA(hwnd, title, sizeof(title));

    if (strstr(title, "Instagram") != NULL) {
        *((bool*)lParam) = true;
        return FALSE; // stop enumeration
    }
    return TRUE;
}

bool isReelsWindowOpen() {
    bool found = false;
    EnumWindows(EnumWindowsProc, (LPARAM)&found);
    return found;
}

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    std::string command =
        "\"C:\\Program Files\\BraveSoftware\\Brave-Browser\\Application\\brave.exe\""
        " --app=https://www.instagram.com/reels/"
        " --user-data-dir=\"C:\\Users\\akotami\\AppData\\Local\\ReelsProfile\""
        " --no-first-run"
        " --no-default-browser-check"
        " --kiosk";

    STARTUPINFOA si = { sizeof(si) };
    PROCESS_INFORMATION pi;

    // Launch Brave
    BOOL success = CreateProcessA(
        NULL,
        (LPSTR)command.c_str(),
        NULL,
        NULL,
        FALSE,
        0,
        NULL,
        NULL,
        &si,
        &pi
    );

    if (!success) {
        return 1;
    }

    // Give browser time to spawn window
    Sleep(2000);

    // Wait until Instagram window appears
    while (!isReelsWindowOpen()) {
        Sleep(500);
    }

    // Stay alive while Instagram window exists
    while (isReelsWindowOpen()) {
        Sleep(1000);
    }

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);

    return 0;
}
#include <stdio.h>
#include <windows.h>
#include <shlobj.h>

static int CALLBACK BrowseFolderCallback(HWND hwnd, UINT uMsg, LPARAM lParam, LPARAM lpData) {
    if (uMsg == BFFM_INITIALIZED) {
        LPCTSTR path = reinterpret_cast<LPCTSTR>(lpData);
        ::SendMessage(hwnd, BFFM_SETSELECTION, true, (LPARAM)path);
    }
    return 0;
}

std::string BrowseFolder(std::string saved_path) {
    TCHAR path[MAX_PATH];
    const char* path_param = saved_path.c_str();

    BROWSEINFO bi = { 0 };
    bi.lpszTitle = ("Browse for folder...");
    bi.ulFlags = BIF_RETURNONLYFSDIRS | BIF_NEWDIALOGSTYLE;
    bi.lpfn = BrowseFolderCallback;
    bi.lParam = reinterpret_cast<LPARAM>(path_param);

    LPITEMIDLIST pidl = SHBrowseForFolder(&bi);
    if (pidl != nullptr) {
        SHGetPathFromIDList(pidl, path);
        CoTaskMemFree(pidl);
        return std::string(path);
    }
    return "";
}

int main () {
    int pares=1,soma=0,i;

    for (i=1;pares<=50;i++) {
        if (i%2==0) {
                soma+=i;
                pares++;
            }
        } return 0;
        }

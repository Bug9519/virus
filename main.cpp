/***
 *
 *                                                                                                                                                                                                                   dddddddd
 *            CCCCCCCCCCCCC                                                                       tttt            1111111                      VVVVVVVV           VVVVVVVV     000000000       1111111               d::::::d
 *         CCC::::::::::::C                                                                    ttt:::t           1::::::1                      V::::::V           V::::::V   00:::::::::00    1::::::1               d::::::d
 *       CC:::::::::::::::C                                                                    t:::::t          1:::::::1                      V::::::V           V::::::V 00:::::::::::::00 1:::::::1               d::::::d
 *      C:::::CCCCCCCC::::C                                                                    t:::::t          111:::::1                      V::::::V           V::::::V0:::::::000:::::::0111:::::1               d:::::d
 *     C:::::C       CCCCCCrrrrr   rrrrrrrrryyyyyyy           yyyyyyyppppp   ppppppppp   ttttttt:::::ttttttt       1::::1       ccccccccccccccccV:::::V           V:::::V 0::::::0   0::::::0   1::::1       ddddddddd:::::d
 *    C:::::C              r::::rrr:::::::::ry:::::y         y:::::y p::::ppp:::::::::p  t:::::::::::::::::t       1::::1     cc:::::::::::::::c V:::::V         V:::::V  0:::::0     0:::::0   1::::1     dd::::::::::::::d
 *    C:::::C              r:::::::::::::::::ry:::::y       y:::::y  p:::::::::::::::::p t:::::::::::::::::t       1::::1    c:::::::::::::::::c  V:::::V       V:::::V   0:::::0     0:::::0   1::::1    d::::::::::::::::d
 *    C:::::C              rr::::::rrrrr::::::ry:::::y     y:::::y   pp::::::ppppp::::::ptttttt:::::::tttttt       1::::l   c:::::::cccccc:::::c   V:::::V     V:::::V    0:::::0 000 0:::::0   1::::l   d:::::::ddddd:::::d
 *    C:::::C               r:::::r     r:::::r y:::::y   y:::::y     p:::::p     p:::::p      t:::::t             1::::l   c::::::c     ccccccc    V:::::V   V:::::V     0:::::0 000 0:::::0   1::::l   d::::::d    d:::::d
 *    C:::::C               r:::::r     rrrrrrr  y:::::y y:::::y      p:::::p     p:::::p      t:::::t             1::::l   c:::::c                  V:::::V V:::::V      0:::::0     0:::::0   1::::l   d:::::d     d:::::d
 *    C:::::C               r:::::r               y:::::y:::::y       p:::::p     p:::::p      t:::::t             1::::l   c:::::c                   V:::::V:::::V       0:::::0     0:::::0   1::::l   d:::::d     d:::::d
 *     C:::::C       CCCCCC r:::::r                y:::::::::y        p:::::p    p::::::p      t:::::t    tttttt   1::::l   c::::::c     ccccccc       V:::::::::V        0::::::0   0::::::0   1::::l   d:::::d     d:::::d
 *      C:::::CCCCCCCC::::C r:::::r                 y:::::::y         p:::::ppppp:::::::p      t::::::tttt:::::t111::::::111c:::::::cccccc:::::c        V:::::::V         0:::::::000:::::::0111::::::111d::::::ddddd::::::dd
 *       CC:::::::::::::::C r:::::r                  y:::::y          p::::::::::::::::p       tt::::::::::::::t1::::::::::1 c:::::::::::::::::c         V:::::V           00:::::::::::::00 1::::::::::1 d:::::::::::::::::d
 *         CCC::::::::::::C r:::::r                 y:::::y           p::::::::::::::pp          tt:::::::::::tt1::::::::::1  cc:::::::::::::::c          V:::V              00:::::::::00   1::::::::::1  d:::::::::ddd::::d
 *            CCCCCCCCCCCCC rrrrrrr                y:::::y            p::::::pppppppp              ttttttttttt  111111111111    cccccccccccccccc           VVV                 000000000     111111111111   ddddddddd   ddddd
 *                                                y:::::y             p:::::p
 *                                               y:::::y              p:::::p
 *                                              y:::::y              p:::::::p
 *                                             y:::::y               p:::::::p
 *                                            yyyyyyy                p:::::::p
 *                                                                   ppppppppp
 *
 *
 *
 * ASCII Art generated using: https://www.patorjk.com/software/taag/
 */

/*
 * License: GNU General Public License v3.0
 *
 * virus.exe -- A pretend Windows virus.
 * Coded on: 30/03/2022 (30th of March, 2022).
 * Coded by Bug9519.
 *
 * Description:
 * This is a pretend virus that I coded one night while I was bored, it doesn't actually do anything destructive, or even useful.
 * It was mainly coded for educational purposes, and to safely test out some Anti-Virus Software (AV's), without needing any actual malware.
 *
 * The only annoying thing it does, is copy itself to the Desktop, Documents, Downloads, Music, Pictures, and Videos folders
 * of whichever user account runs it, and then it attempts to copy itself to the Windows folder (default: C:\Windows).
 *
 * It also creates a text file called help.txt which is just the contents of the "help" command in Windows Command Prompt, piped
 * to a text file. It later deletes this same file, to simulate "destructive" actions which some AV heuristics should pick up.
 *
 * Disclaimer: This virus doesn't actually do any destructive actions, but on the one-in-a-bazillion chance that it wrecks your computer,
 *             I can't be held responsible for such damage. I also can not be held responsible for your actions, if you use this to trick
 *             your friends, and they end up hitting you or something... that's on you.
 *             That said, have fun, don't create real viruses/virii, and don't be a dick in general.
 */

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    system("title Crypt1cV01d Virus Installer."); // I couldn't think of a cool name...
    cout << "Installing virus: file.spreader by Crypt1cV01d." << endl;
    cout << "Please wait." << endl;
    Sleep(1000);

    /*
     * "Virus Installation Routine"
     * 1: Copies itself to the current user's Desktop, Documents, Downloads, Music, Pictures, and Videos folders
     * 2: Attempts to copy itself to the Windows folder. (Should only work if it's run with Administrator priviledges.)
     * 3: It runs the "help" command in Windows Command Prompt, and then pipes the output to a text file called "help.txt".
     * 4: Erases the file "help.txt" in the current directory, to simulate destructive actions, triggers some AV's.
     * 5: Exits, pretending to be completed.
     */

    system("copy /b virus.exe %USERPROFILE%\\Desktop\\virus.exe");    // Step 1
    system("copy /b virus.exe %USERPROFILE%\\Documents\\virus.exe");  // Step 1
    system("cls");
    system("copy /b virus.exe %USERPROFILE%\\Downloads\\virus.exe");  // Step 1
    system("copy /b virus.exe %USERPROFILE%\\Music\\virus.exe");      // Step 1
    system("cls");
    system("copy /b virus.exe %USERPROFILE%\\Pictures\\virus.exe");   // Step 1
    system("copy /b virus.exe %USERPROFILE%\\Videos\\virus.exe");     // Step 1
    system("cls");
    system("copy /b virus.exe %WINDIR%\\virus.exe");                  // Step 2
    system("help >> help.txt");                                       // Step 3
    system("cls");
    Sleep(2000);
    cout << "Virus install complete." << endl;
    Sleep(3000);
    system("erase /F /Q help.txt");                                   // Step 4
    cout << "Exiting." << endl;
    Sleep(1000);
    return 0;                                                         // Step 5
}

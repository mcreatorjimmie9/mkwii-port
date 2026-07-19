/* Function at 0x80682BC8, size=568 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 15 function(s) */

int FUN_80682BC8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80682BDC
    *(0x14 + r1) = r29; // stw @ 0x80682BE0
    r0 = *(8 + r3); // lwz @ 0x80682BE4
    if (!=) goto 0x0x80682de4;
    r0 = *(0x68 + r3); // lwz @ 0x80682BF0
    if (==) goto 0x0x80682c18;
    if (==) goto 0x0x80682c84;
    if (==) goto 0x0x80682cd0;
    if (==) goto 0x0x80682d2c;
    /* b 0x80682de4 */ // 0x80682C14
    /* lis r30, 0 */ // 0x80682C18
    r3 = *(0 + r30); // lwz @ 0x80682C1C
    FUN_806F58E0(); // bl 0x806F58E0
    if (!=) goto 0x0x80682c38;
    r3 = *(0 + r30); // lwz @ 0x80682C2C
    FUN_806F5BA0(); // bl 0x806F5BA0
    /* b 0x80682de4 */ // 0x80682C34
    r3 = *(0 + r30); // lwz @ 0x80682C38
    FUN_806F58E8(); // bl 0x806F58E8
    if (!=) goto 0x0x80682c68;
    r3 = *(0 + r30); // lwz @ 0x80682C48
    FUN_806F5918(); // bl 0x806F5918
    if (!=) goto 0x0x80682c68;
    /* lis r3, 0 */ // 0x80682C58
    r3 = *(0 + r3); // lwz @ 0x80682C5C
    r3 = *(0x90 + r3); // lwz @ 0x80682C60
    FUN_806845A4(r3); // bl 0x806845A4
    /* lis r3, 0 */ // 0x80682C68
    r3 = *(0 + r3); // lwz @ 0x80682C6C
    r3 = *(0x90 + r3); // lwz @ 0x80682C70
    FUN_806845B8(r3); // bl 0x806845B8
    /* li r0, 2 */ // 0x80682C78
    *(0x68 + r31) = r0; // stw @ 0x80682C7C
    /* b 0x80682de4 */ // 0x80682C80
    /* lis r3, 0 */ // 0x80682C84
    r3 = *(0 + r3); // lwz @ 0x80682C88
    r3 = *(0x90 + r3); // lwz @ 0x80682C8C
    FUN_806844E8(r3); // bl 0x806844E8
    if (!=) goto 0x0x80682de4;
    /* lis r30, 0 */ // 0x80682C9C
    r3 = *(0 + r30); // lwz @ 0x80682CA0
    FUN_806F5A34(); // bl 0x806F5A34
    if (!=) goto 0x0x80682cc4;
    r3 = *(0 + r30); // lwz @ 0x80682CB0
    FUN_806F9488(); // bl 0x806F9488
    /* li r0, 3 */ // 0x80682CB8
    *(0x68 + r31) = r0; // stw @ 0x80682CBC
    /* b 0x80682de4 */ // 0x80682CC0
    /* li r0, 4 */ // 0x80682CC4
    *(0x68 + r31) = r0; // stw @ 0x80682CC8
    /* b 0x80682de4 */ // 0x80682CCC
    /* lis r30, 0 */ // 0x80682CD0
    r3 = *(0 + r30); // lwz @ 0x80682CD4
    FUN_806F58E0(); // bl 0x806F58E0
    if (!=) goto 0x0x80682cf0;
    r3 = *(0 + r30); // lwz @ 0x80682CE4
    FUN_806F5BA0(); // bl 0x806F5BA0
    /* b 0x80682de4 */ // 0x80682CEC
    r3 = *(0 + r30); // lwz @ 0x80682CF0
    FUN_806F58E8(); // bl 0x806F58E8
    if (!=) goto 0x0x80682d20;
    r3 = *(0 + r30); // lwz @ 0x80682D00
    FUN_806F5918(); // bl 0x806F5918
    if (!=) goto 0x0x80682d20;
    /* lis r3, 0 */ // 0x80682D10
    r3 = *(0 + r3); // lwz @ 0x80682D14
    r3 = *(0x90 + r3); // lwz @ 0x80682D18
    FUN_806845A4(r3); // bl 0x806845A4
    /* li r0, 4 */ // 0x80682D20
    *(0x68 + r31) = r0; // stw @ 0x80682D24
    /* b 0x80682de4 */ // 0x80682D28
    r0 = *(0x20 + r3); // lwz @ 0x80682D2C
    if (<) goto 0x0x80682de4;
    /* lis r3, 0 */ // 0x80682D38
    r3 = *(0 + r3); // lwz @ 0x80682D3C
    r0 = *(0x30 + r3); // lwz @ 0x80682D40
    if (!=) goto 0x0x80682de4;
    r3 = *(0 + r3); // lwz @ 0x80682D4C
    r29 = *(0x144 + r3); // lwz @ 0x80682D50
    if (!=) goto 0x0x80682d64;
    /* li r29, 0 */ // 0x80682D5C
    /* b 0x80682db8 */ // 0x80682D60
    /* lis r30, 0 */ // 0x80682D64
    r30 = r30 + 0; // 0x80682D68
    if (==) goto 0x0x80682db4;
    r12 = *(0 + r29); // lwz @ 0x80682D70
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x80682D78
    /* mtctr r12 */ // 0x80682D7C
    /* bctrl  */ // 0x80682D80
    /* b 0x80682d9c */ // 0x80682D84
    if (!=) goto 0x0x80682d98;
    /* li r0, 1 */ // 0x80682D90
    /* b 0x80682da8 */ // 0x80682D94
    r3 = *(0 + r3); // lwz @ 0x80682D98
    if (!=) goto 0x0x80682d88;
    /* li r0, 0 */ // 0x80682DA4
    if (==) goto 0x0x80682db4;
    /* b 0x80682db8 */ // 0x80682DB0
    /* li r29, 0 */ // 0x80682DB4
    r3 = r29;
    FUN_80649164(r3); // bl 0x80649164
    r12 = *(0 + r31); // lwz @ 0x80682DC0
    /* lis r5, 0 */ // 0x80682DC4
    /* lfs f1, 0(r5) */ // 0x80682DC8
    r3 = r31;
    r12 = *(0x1c + r12); // lwz @ 0x80682DD0
    /* li r4, 0x3f */ // 0x80682DD4
    /* li r5, 0 */ // 0x80682DD8
    /* mtctr r12 */ // 0x80682DDC
    /* bctrl  */ // 0x80682DE0
    r0 = *(0x24 + r1); // lwz @ 0x80682DE4
    r31 = *(0x1c + r1); // lwz @ 0x80682DE8
    r30 = *(0x18 + r1); // lwz @ 0x80682DEC
    r29 = *(0x14 + r1); // lwz @ 0x80682DF0
    return;
}
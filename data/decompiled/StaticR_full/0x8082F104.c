/* Function at 0x8082F104, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8082F104(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8082F10C
    *(0x14 + r1) = r0; // stw @ 0x8082F110
    *(0xc + r1) = r31; // stw @ 0x8082F114
    r31 = r3;
    r0 = *(0 + r4); // lbz @ 0x8082F11C
    if (==) goto 0x0x8082f150;
    /* lis r4, 0 */ // 0x8082F128
    /* li r6, 0 */ // 0x8082F12C
    r4 = r4 + 0; // 0x8082F130
    /* li r7, 0 */ // 0x8082F134
    r5 = r4 + 7; // 0x8082F138
    /* li r8, 0 */ // 0x8082F13C
    FUN_8082AFF0(r6, r4, r7, r5, r8); // bl 0x8082AFF0
    r3 = r31;
    FUN_8082B414(r7, r5, r8, r3); // bl 0x8082B414
    /* b 0x8082f170 */ // 0x8082F14C
    /* lis r5, 0 */ // 0x8082F150
    /* li r6, 0 */ // 0x8082F154
    r5 = r5 + 0; // 0x8082F158
    /* li r7, 0 */ // 0x8082F15C
    r4 = r5 + 0x10; // 0x8082F160
    /* li r8, 0 */ // 0x8082F164
    r5 = r5 + 0x17; // 0x8082F168
    FUN_8082AFF0(r5, r7, r4, r8, r5); // bl 0x8082AFF0
    r0 = *(0x14 + r1); // lwz @ 0x8082F170
    r31 = *(0xc + r1); // lwz @ 0x8082F174
    return;
}
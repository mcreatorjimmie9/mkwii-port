/* Function at 0x80683A5C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80683A5C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x80683A64
    *(0x14 + r1) = r0; // stw @ 0x80683A68
    *(0xc + r1) = r31; // stw @ 0x80683A6C
    /* lis r31, 0 */ // 0x80683A70
    r3 = *(0 + r31); // lwz @ 0x80683A74
    r3 = r3 + 0x34; // 0x80683A78
    FUN_8067F3DC(r3); // bl 0x8067F3DC
    if (!=) goto 0x0x80683aa0;
    r3 = *(0 + r31); // lwz @ 0x80683A88
    r3 = r3 + 0x34; // 0x80683A8C
    FUN_8067F50C(r3); // bl 0x8067F50C
    r3 = *(0 + r31); // lwz @ 0x80683A94
    r3 = r3 + 0x34; // 0x80683A98
    FUN_8067F608(r3, r3); // bl 0x8067F608
    r0 = *(0x14 + r1); // lwz @ 0x80683AA0
    r31 = *(0xc + r1); // lwz @ 0x80683AA4
    return;
}
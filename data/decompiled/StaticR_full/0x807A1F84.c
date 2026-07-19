/* Function at 0x807A1F84, size=196 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807A1F84(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807A1F94
    *(8 + r1) = r30; // stw @ 0x807A1F98
    r30 = r5;
    if (==) goto 0x0x807a2030;
    /* lis r3, 0 */ // 0x807A1FA4
    /* li r31, 1 */ // 0x807A1FA8
    r3 = *(0 + r3); // lwz @ 0x807A1FAC
    r3 = r3 + 0x34; // 0x807A1FB0
    FUN_8067F3DC(r3, r3); // bl 0x8067F3DC
    if (>=) goto 0x0x807a1fe8;
    if (>=) goto 0x0x807a1fdc;
    if (>=) goto 0x0x807a2024;
    if (>=) goto 0x0x807a2008;
    /* b 0x807a2024 */ // 0x807A1FD8
    if (>=) goto 0x0x807a2024;
    /* b 0x807a2010 */ // 0x807A1FE4
    if (>=) goto 0x0x807a1ffc;
    if (>=) goto 0x0x807a2024;
    /* b 0x807a2018 */ // 0x807A1FF8
    if (>=) goto 0x0x807a2024;
    /* b 0x807a2020 */ // 0x807A2004
    r31 = r31 | 2; // 0x807A2008
    /* b 0x807a2024 */ // 0x807A200C
    r31 = r31 | 4; // 0x807A2010
    /* b 0x807a2024 */ // 0x807A2014
    r31 = r31 | 8; // 0x807A2018
    /* b 0x807a2024 */ // 0x807A201C
    r31 = r31 | 0x10; // 0x807A2020
    r3 = r30;
    r4 = r31;
    FUN_807A027C(r3, r4); // bl 0x807A027C
    r0 = *(0x14 + r1); // lwz @ 0x807A2030
    r31 = *(0xc + r1); // lwz @ 0x807A2034
    r30 = *(8 + r1); // lwz @ 0x807A2038
    return;
}
/* Function at 0x806810F4, size=236 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806810F4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x806810FC
    *(0xc + r1) = r31; // stw @ 0x80681104
    *(8 + r1) = r30; // stw @ 0x80681108
    r30 = r3;
    r3 = *(0 + r4); // lwz @ 0x80681110
    r4 = *(0x4b0 + r30); // lwz @ 0x80681114
    r31 = r3 + 0x34; // 0x80681118
    r3 = r31;
    FUN_8067F3DC(r3); // bl 0x8067F3DC
    r0 = *(8 + r30); // lwz @ 0x80681124
    if (==) goto 0x0x80681138;
    if (!=) goto 0x0x806811c8;
    r0 = *(0x4bc + r30); // lwz @ 0x80681138
    if (==) goto 0x0x80681150;
    if (==) goto 0x0x80681194;
    /* b 0x806811c8 */ // 0x8068114C
    r4 = *(0x4b8 + r30); // lwz @ 0x80681150
    FUN_8067FAAC(); // bl 0x8067FAAC
    if (!=) goto 0x0x806811c8;
    /* li r0, 0 */ // 0x80681160
    *(0x4bc + r30) = r0; // stw @ 0x80681164
    r3 = r30 + 0x1c8; // 0x80681168
    /* li r4, 0x26ac */ // 0x8068116C
    /* li r5, 0 */ // 0x80681170
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    r0 = *(8 + r30); // lwz @ 0x80681178
    if (!=) goto 0x0x806811c8;
    r4 = *(0x4b0 + r30); // lwz @ 0x80681184
    r3 = r31;
    FUN_8067F914(r3); // bl 0x8067F914
    /* b 0x806811c8 */ // 0x80681190
    r0 = *(0x4b8 + r30); // lwz @ 0x80681194
    if (==) goto 0x0x806811a8;
    if (==) goto 0x0x806811c8;
    r4 = *(0x4b0 + r30); // lwz @ 0x806811A8
    r3 = r31;
    FUN_8067F430(r3); // bl 0x8067F430
    if (==) goto 0x0x806811c8;
    r4 = *(0x4b0 + r30); // lwz @ 0x806811BC
    r3 = r31;
    FUN_8067F914(r3); // bl 0x8067F914
    r0 = *(0x14 + r1); // lwz @ 0x806811C8
    r31 = *(0xc + r1); // lwz @ 0x806811CC
    r30 = *(8 + r1); // lwz @ 0x806811D0
    return;
}
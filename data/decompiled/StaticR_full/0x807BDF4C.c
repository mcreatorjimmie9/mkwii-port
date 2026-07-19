/* Function at 0x807BDF4C, size=232 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_807BDF4C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BDF58
    r31 = r3;
    r4 = *(0x198 + r3); // lwz @ 0x807BDF60
    r3 = *(0 + r4); // lwz @ 0x807BDF64
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BDF6C
    /* clrlwi r0, r3, 0x18 */ // 0x807BDF70
    r4 = *(0 + r4); // lwz @ 0x807BDF74
    /* mulli r0, r0, 0x248 */ // 0x807BDF78
    /* li r3, 0 */ // 0x807BDF7C
    r4 = *(0x14 + r4); // lwz @ 0x807BDF80
    r4 = r4 + r0; // 0x807BDF84
    r0 = *(0xc8 + r4); // lwz @ 0x807BDF88
    if (==) goto 0x0x807bdfa4;
    r0 = *(0x208 + r4); // lbz @ 0x807BDF94
    if (!=) goto 0x0x807bdfa4;
    /* li r3, 1 */ // 0x807BDFA0
    if (!=) goto 0x0x807bdfbc;
    r3 = r31;
    r4 = r31 + 0x38; // 0x807BDFB0
    FUN_807CF1B4(r3, r3, r4); // bl 0x807CF1B4
    /* b 0x807be020 */ // 0x807BDFB8
    r0 = *(0x1a0 + r31); // lbz @ 0x807BDFBC
    if (==) goto 0x0x807be020;
    r0 = *(0x1a4 + r31); // lwz @ 0x807BDFC8
    if (==) goto 0x0x807bdfe8;
    if (==) goto 0x0x807be004;
    if (==) goto 0x0x807be014;
    /* b 0x807be020 */ // 0x807BDFE4
    r3 = *(0x198 + r31); // lwz @ 0x807BDFE8
    /* li r4, 4 */ // 0x807BDFEC
    FUN_807BB884(r4); // bl 0x807BB884
    r3 = r31;
    r4 = r31 + 0x64; // 0x807BDFF8
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    /* b 0x807be020 */ // 0x807BE000
    r3 = r31;
    r4 = r31 + 0xe8; // 0x807BE008
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    /* b 0x807be020 */ // 0x807BE010
    r3 = r31;
    r4 = r31 + 0x114; // 0x807BE018
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807BE020
    r31 = *(0xc + r1); // lwz @ 0x807BE024
    return;
}
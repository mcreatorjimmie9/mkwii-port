/* Function at 0x80697FB0, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80697FB0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80697FC0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80697FC8
    r30 = r3;
    if (==) goto 0x0x80698014;
    r3 = *(0x98 + r3); // lwz @ 0x80697FD4
    /* li r4, 1 */ // 0x80697FD8
    FUN_806612BC(r4); // bl 0x806612BC
    r3 = *(0x90 + r30); // lwz @ 0x80697FE0
    /* li r4, 1 */ // 0x80697FE4
    FUN_80683CA0(r4, r4); // bl 0x80683CA0
    r3 = *(0x94 + r30); // lwz @ 0x80697FEC
    /* li r4, 1 */ // 0x80697FF0
    FUN_806E0758(r4, r4); // bl 0x806E0758
    r3 = r30 + 0x34; // 0x80697FF8
    /* li r4, -1 */ // 0x80697FFC
    FUN_8067EEE0(r4, r3, r4); // bl 0x8067EEE0
    if (<=) goto 0x0x80698014;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80698018
    r30 = *(8 + r1); // lwz @ 0x8069801C
    r0 = *(0x14 + r1); // lwz @ 0x80698020
    return;
}
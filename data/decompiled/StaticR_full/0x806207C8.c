/* Function at 0x806207C8, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806207C8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806207DC
    r30 = r3;
    r0 = *(0x8c + r3); // lbz @ 0x806207E4
    if (==) goto 0x0x8062080c;
    r3 = *(0x7c + r3); // lwz @ 0x806207F0
    FUN_805EF1E4(); // bl 0x805EF1E4
    r3 = *(0x88 + r30); // lwz @ 0x806207F8
    if (==) goto 0x0x8062080c;
    r4 = r31;
    FUN_805EF1E4(r4); // bl 0x805EF1E4
    r0 = *(0x14 + r1); // lwz @ 0x8062080C
    r31 = *(0xc + r1); // lwz @ 0x80620810
    r30 = *(8 + r1); // lwz @ 0x80620814
    return;
}
/* Function at 0x80620674, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80620674(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80620684
    r30 = r3;
    r0 = *(0x8c + r3); // lbz @ 0x8062068C
    if (==) goto 0x0x806206c0;
    FUN_8061E8EC(); // bl 0x8061E8EC
    r4 = *(0x7c + r30); // lwz @ 0x8062069C
    FUN_805FB070(); // bl 0x805FB070
    r31 = *(0x88 + r30); // lwz @ 0x806206A4
    if (==) goto 0x0x806206c0;
    r3 = r30;
    FUN_8061E8EC(r3); // bl 0x8061E8EC
    r4 = r31;
    FUN_805FB070(r3, r4); // bl 0x805FB070
    r0 = *(0x14 + r1); // lwz @ 0x806206C0
    r31 = *(0xc + r1); // lwz @ 0x806206C4
    r30 = *(8 + r1); // lwz @ 0x806206C8
    return;
}
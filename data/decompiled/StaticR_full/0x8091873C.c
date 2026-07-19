/* Function at 0x8091873C, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8091873C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80918754
    r29 = r3;
    r5 = *(0xde + r3); // lbz @ 0x8091875C
    /* neg r0, r5 */ // 0x80918760
    r0 = r0 | r5; // 0x80918764
    r0 = r0 >> 0x1f; // srawi
    r4 = r4 & r0; // 0x8091876C
    FUN_808A1C4C(); // bl 0x808A1C4C
    /* li r31, 1 */ // 0x80918774
    r0 = r31 rlwinm 2; // rlwinm
    r3 = r29 + r0; // 0x8091877C
    r3 = *(0xb4 + r3); // lwz @ 0x80918780
    if (==) goto 0x0x809187b8;
    /* clrlwi r0, r31, 0x18 */ // 0x8091878C
    r12 = *(0 + r3); // lwz @ 0x80918790
    r4 = r29 + r0; // 0x80918794
    r4 = *(0xde + r4); // lbz @ 0x80918798
    r12 = *(0xc + r12); // lwz @ 0x8091879C
    /* neg r0, r4 */ // 0x809187A0
    r0 = r0 | r4; // 0x809187A4
    r0 = r0 >> 0x1f; // srawi
    r4 = r30 & r0; // 0x809187AC
    /* mtctr r12 */ // 0x809187B0
    /* bctrl  */ // 0x809187B4
    r31 = r31 + 1; // 0x809187B8
    if (<) goto 0x0x80918778;
    r0 = *(0x24 + r1); // lwz @ 0x809187C4
    r31 = *(0x1c + r1); // lwz @ 0x809187C8
    r30 = *(0x18 + r1); // lwz @ 0x809187CC
    r29 = *(0x14 + r1); // lwz @ 0x809187D0
    return;
}
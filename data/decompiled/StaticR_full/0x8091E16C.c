/* Function at 0x8091E16C, size=272 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8091E16C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* mulli r31, r4, 0x18 */ // 0x8091E17C
    *(0x18 + r1) = r30; // stw @ 0x8091E180
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8091E188
    r29 = r3;
    r5 = *(0x1c + r3); // lwz @ 0x8091E190
    /* lbzx r0, r5, r31 */ // 0x8091E194
    if (==) goto 0x0x8091e260;
    r4 = r5 + r31; // 0x8091E1A0
    r0 = *(0x10 + r4); // lwz @ 0x8091E1A4
    r4 = *(0x14 + r4); // lhz @ 0x8091E1A8
    /* neg r5, r0 */ // 0x8091E1AC
    FUN_8091E878(); // bl 0x8091E878
    /* li r7, 0 */ // 0x8091E1B4
    /* b 0x8091e244 */ // 0x8091E1B8
    r3 = *(0x34 + r29); // lwz @ 0x8091E1BC
    r5 = r7 rlwinm 2; // rlwinm
    /* li r8, 0 */ // 0x8091E1C4
    /* lwzx r4, r3, r5 */ // 0x8091E1C8
    /* b 0x8091e234 */ // 0x8091E1CC
    r3 = *(0x3c + r29); // lwz @ 0x8091E1D0
    r0 = r8 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r5 */ // 0x8091E1D8
    /* lwzx r0, r3, r0 */ // 0x8091E1DC
    if (!=) goto 0x0x8091e230;
    /* b 0x8091e208 */ // 0x8091E1E8
    r0 = *(0x3c + r29); // lwz @ 0x8091E1EC
    r4 = r8 rlwinm 2; // rlwinm
    r8 = r8 + 1; // 0x8091E1F4
    /* lwzx r6, r5, r0 */ // 0x8091E1F8
    r3 = r6 + r4; // 0x8091E1FC
    r0 = *(4 + r3); // lwz @ 0x8091E200
    /* stwx r0, r6, r4 */ // 0x8091E204
    r6 = *(0x34 + r29); // lwz @ 0x8091E208
    /* clrlwi r4, r8, 0x10 */ // 0x8091E20C
    /* lwzx r3, r5, r6 */ // 0x8091E210
    r0 = r3 + -1; // 0x8091E214
    if (<) goto 0x0x8091e1ec;
    /* lwzx r3, r6, r5 */ // 0x8091E220
    r0 = r3 + -1; // 0x8091E224
    /* stwx r0, r6, r5 */ // 0x8091E228
    /* b 0x8091e240 */ // 0x8091E22C
    r8 = r8 + 1; // 0x8091E230
    /* clrlwi r0, r8, 0x10 */ // 0x8091E234
    if (<) goto 0x0x8091e1d0;
    r7 = r7 + 1; // 0x8091E240
    r0 = *(0x10 + r29); // lhz @ 0x8091E244
    /* clrlwi r3, r7, 0x10 */ // 0x8091E248
    if (<) goto 0x0x8091e1bc;
    r3 = *(0x1c + r29); // lwz @ 0x8091E254
    /* li r0, 0 */ // 0x8091E258
    /* stbx r0, r3, r31 */ // 0x8091E25C
    r0 = *(0x24 + r1); // lwz @ 0x8091E260
    r31 = *(0x1c + r1); // lwz @ 0x8091E264
    r30 = *(0x18 + r1); // lwz @ 0x8091E268
    r29 = *(0x14 + r1); // lwz @ 0x8091E26C
    return;
}
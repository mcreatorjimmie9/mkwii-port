/* Function at 0x805A3828, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805A3828(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r6, 0 */ // 0x805A3830
    /* li r31, 0 */ // 0x805A383C
    *(0x18 + r1) = r30; // stw @ 0x805A3840
    *(0x14 + r1) = r29; // stw @ 0x805A3844
    *(0x10 + r1) = r28; // stw @ 0x805A3848
    r5 = *(4 + r3); // lwz @ 0x805A384C
    r7 = *(0 + r5); // lwz @ 0x805A3850
    r0 = *(8 + r7); // lhz @ 0x805A3854
    /* mtctr r0 */ // 0x805A3858
    if (<=) goto 0x0x805a3890;
    r0 = *(0xa + r7); // lhz @ 0x805A3864
    r3 = *(4 + r5); // lwz @ 0x805A3868
    r0 = r7 + r0; // 0x805A386C
    /* lwzx r3, r3, r6 */ // 0x805A3870
    /* lwzux r0, r3, r0 */ // 0x805A3874
    if (!=) goto 0x0x805a3888;
    r31 = r3;
    /* b 0x805a3890 */ // 0x805A3884
    r6 = r6 + 4; // 0x805A3888
    if (counter-- != 0) goto 0x0x805a3864;
    /* li r28, 0 */ // 0x805A3894
    if (==) goto 0x0x805a3920;
    /* li r3, 0xc */ // 0x805A389C
    FUN_805E3430(r3); // bl 0x805E3430
    r28 = r3;
    if (==) goto 0x0x805a3920;
    /* li r0, 0 */ // 0x805A38B0
    *(0 + r3) = r0; // stw @ 0x805A38B4
    r29 = r31 + 8; // 0x805A38B8
    *(4 + r3) = r0; // sth @ 0x805A38BC
    *(8 + r3) = r31; // stw @ 0x805A38C0
    r30 = *(4 + r31); // lhz @ 0x805A38C4
}
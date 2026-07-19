/* Function at 0x805A3708, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805A3708(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r6, 0 */ // 0x805A3710
    /* li r31, 0 */ // 0x805A371C
    *(0x18 + r1) = r30; // stw @ 0x805A3720
    *(0x14 + r1) = r29; // stw @ 0x805A3724
    *(0x10 + r1) = r28; // stw @ 0x805A3728
    r5 = *(4 + r3); // lwz @ 0x805A372C
    r7 = *(0 + r5); // lwz @ 0x805A3730
    r0 = *(8 + r7); // lhz @ 0x805A3734
    /* mtctr r0 */ // 0x805A3738
    if (<=) goto 0x0x805a3770;
    r0 = *(0xa + r7); // lhz @ 0x805A3744
    r3 = *(4 + r5); // lwz @ 0x805A3748
    r0 = r7 + r0; // 0x805A374C
    /* lwzx r3, r3, r6 */ // 0x805A3750
    /* lwzux r0, r3, r0 */ // 0x805A3754
    if (!=) goto 0x0x805a3768;
    r31 = r3;
    /* b 0x805a3770 */ // 0x805A3764
    r6 = r6 + 4; // 0x805A3768
    if (counter-- != 0) goto 0x0x805a3744;
    /* li r28, 0 */ // 0x805A3774
    if (==) goto 0x0x805a3804;
    /* li r3, 0xc */ // 0x805A377C
    FUN_805E3430(r3); // bl 0x805E3430
    r28 = r3;
    if (==) goto 0x0x805a3804;
    /* li r0, 0 */ // 0x805A3790
    *(0 + r3) = r0; // stw @ 0x805A3794
    r29 = r31 + 8; // 0x805A3798
    *(4 + r3) = r0; // sth @ 0x805A379C
    *(8 + r3) = r31; // stw @ 0x805A37A0
    r30 = *(4 + r31); // lhz @ 0x805A37A4
}
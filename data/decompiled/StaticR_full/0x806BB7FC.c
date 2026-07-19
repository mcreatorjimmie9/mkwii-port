/* Function at 0x806BB7FC, size=304 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806BB7FC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r5, 3 */ // 0x806BB804
    *(0x18 + r1) = r30; // stw @ 0x806BB810
    *(0x14 + r1) = r29; // stw @ 0x806BB814
    r29 = r3;
    /* lis r3, 0 */ // 0x806BB81C
    r3 = *(0 + r3); // lwz @ 0x806BB820
    r4 = r29 + 0x4f0; // 0x806BB824
    r6 = *(0x31c + r29); // lwz @ 0x806BB828
    r7 = r29 + 0x324; // 0x806BB82C
    FUN_806FEC8C(r3, r4, r7); // bl 0x806FEC8C
    if (==) goto 0x0x806bb908;
    /* lis r3, 0 */ // 0x806BB83C
    r3 = *(0 + r3); // lwz @ 0x806BB840
    r3 = *(0 + r3); // lwz @ 0x806BB844
    r30 = *(0x144 + r3); // lwz @ 0x806BB848
    if (!=) goto 0x0x806bb85c;
    /* li r30, 0 */ // 0x806BB854
    /* b 0x806bb8b0 */ // 0x806BB858
    /* lis r31, 0 */ // 0x806BB85C
    r31 = r31 + 0; // 0x806BB860
    if (==) goto 0x0x806bb8ac;
    r12 = *(0 + r30); // lwz @ 0x806BB868
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806BB870
    /* mtctr r12 */ // 0x806BB874
    /* bctrl  */ // 0x806BB878
    /* b 0x806bb894 */ // 0x806BB87C
    if (!=) goto 0x0x806bb890;
    /* li r0, 1 */ // 0x806BB888
    /* b 0x806bb8a0 */ // 0x806BB88C
    r3 = *(0 + r3); // lwz @ 0x806BB890
    if (!=) goto 0x0x806bb880;
    /* li r0, 0 */ // 0x806BB89C
    if (==) goto 0x0x806bb8ac;
    /* b 0x806bb8b0 */ // 0x806BB8A8
    /* li r30, 0 */ // 0x806BB8AC
    r12 = *(0 + r30); // lwz @ 0x806BB8B0
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806BB8B8
    /* mtctr r12 */ // 0x806BB8BC
    /* bctrl  */ // 0x806BB8C0
    r12 = *(0 + r30); // lwz @ 0x806BB8C4
    r3 = r30;
    /* li r4, 0x1e18 */ // 0x806BB8CC
    /* li r5, 0 */ // 0x806BB8D0
    r12 = *(0x68 + r12); // lwz @ 0x806BB8D4
    /* mtctr r12 */ // 0x806BB8D8
    /* bctrl  */ // 0x806BB8DC
    r12 = *(0 + r29); // lwz @ 0x806BB8E0
    r3 = r29;
    /* li r4, 0x4f */ // 0x806BB8E8
    /* li r5, 0 */ // 0x806BB8EC
    r12 = *(0x24 + r12); // lwz @ 0x806BB8F0
    /* mtctr r12 */ // 0x806BB8F4
    /* bctrl  */ // 0x806BB8F8
    /* li r0, 3 */ // 0x806BB8FC
    *(0x310 + r29) = r0; // stw @ 0x806BB900
    /* b 0x806bb910 */ // 0x806BB904
    r3 = r29;
    FUN_806BBC2C(r3); // bl 0x806BBC2C
    r0 = *(0x24 + r1); // lwz @ 0x806BB910
    r31 = *(0x1c + r1); // lwz @ 0x806BB914
    r30 = *(0x18 + r1); // lwz @ 0x806BB918
    r29 = *(0x14 + r1); // lwz @ 0x806BB91C
    return;
}
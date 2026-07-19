/* Function at 0x806C47B4, size=320 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806C47B4(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806C47BC
    *(0xd8 + r1) = r30; // stw @ 0x806C47C8
    *(0xd4 + r1) = r29; // stw @ 0x806C47CC
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806C47D4
    r3 = *(0 + r3); // lwz @ 0x806C47D8
    r30 = *(0x14c + r3); // lwz @ 0x806C47DC
    if (!=) goto 0x0x806c47f0;
    /* li r30, 0 */ // 0x806C47E8
    /* b 0x806c4844 */ // 0x806C47EC
    /* lis r31, 0 */ // 0x806C47F0
    r31 = r31 + 0; // 0x806C47F4
    if (==) goto 0x0x806c4840;
    r12 = *(0 + r30); // lwz @ 0x806C47FC
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806C4804
    /* mtctr r12 */ // 0x806C4808
    /* bctrl  */ // 0x806C480C
    /* b 0x806c4828 */ // 0x806C4810
    if (!=) goto 0x0x806c4824;
    /* li r0, 1 */ // 0x806C481C
    /* b 0x806c4834 */ // 0x806C4820
    r3 = *(0 + r3); // lwz @ 0x806C4824
    if (!=) goto 0x0x806c4814;
    /* li r0, 0 */ // 0x806C4830
    if (==) goto 0x0x806c4840;
    /* b 0x806c4844 */ // 0x806C483C
    /* li r30, 0 */ // 0x806C4840
    r12 = *(0 + r30); // lwz @ 0x806C4844
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806C484C
    /* mtctr r12 */ // 0x806C4850
    /* bctrl  */ // 0x806C4854
    r3 = r30;
    /* li r4, 0xfa3 */ // 0x806C485C
    /* li r5, 0 */ // 0x806C4860
    FUN_8066CDDC(r3, r4, r5); // bl 0x8066CDDC
    r0 = r29 + 0x44; // 0x806C4868
    *(0x188 + r30) = r0; // stw @ 0x806C486C
    FUN_80654ECC(r5, r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806C4878
    r3 = *(0 + r3); // lwz @ 0x806C487C
    FUN_806F590C(r3, r3); // bl 0x806F590C
    *(8 + r1) = r3; // stw @ 0x806C4884
    r3 = r30;
    /* li r4, 0x17e0 */ // 0x806C4890
    r12 = *(0 + r30); // lwz @ 0x806C4894
    r12 = *(0x68 + r12); // lwz @ 0x806C4898
    /* mtctr r12 */ // 0x806C489C
    /* bctrl  */ // 0x806C48A0
    r12 = *(0 + r29); // lwz @ 0x806C48A4
    r3 = r29;
    /* li r4, 0x51 */ // 0x806C48AC
    /* li r5, 0 */ // 0x806C48B0
    r12 = *(0x24 + r12); // lwz @ 0x806C48B4
    /* mtctr r12 */ // 0x806C48B8
    /* bctrl  */ // 0x806C48BC
    /* li r0, 5 */ // 0x806C48C0
    *(0x68 + r29) = r0; // stw @ 0x806C48C4
    /* lis r3, 0 */ // 0x806C48C8
    r3 = *(0 + r3); // lwz @ 0x806C48CC
    r3 = *(0 + r3); // lwz @ 0x806C48D0
    FUN_80686240(r3); // bl 0x80686240
    r0 = *(0xe4 + r1); // lwz @ 0x806C48D8
    r31 = *(0xdc + r1); // lwz @ 0x806C48DC
    r30 = *(0xd8 + r1); // lwz @ 0x806C48E0
    r29 = *(0xd4 + r1); // lwz @ 0x806C48E4
    return;
}
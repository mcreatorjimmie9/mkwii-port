/* Function at 0x808C2888, size=228 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_808C2888(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x808C2890
    /* li r5, 0 */ // 0x808C2894
    *(0x14 + r1) = r0; // stw @ 0x808C2898
    /* li r0, -1 */ // 0x808C289C
    *(0xc + r1) = r31; // stw @ 0x808C28A0
    /* lis r31, 0 */ // 0x808C28A4
    *(8 + r1) = r30; // stw @ 0x808C28A8
    r30 = r3;
    *(0x6c4 + r3) = r5; // stw @ 0x808C28B0
    *(0x6bc + r3) = r4; // stw @ 0x808C28B4
    *(0x6c0 + r3) = r4; // stw @ 0x808C28B8
    *(0x3dd + r3) = r4; // stb @ 0x808C28BC
    *(0x6c8 + r3) = r0; // stw @ 0x808C28C0
    r3 = *(0 + r31); // lwz @ 0x808C28C4
    r3 = *(0 + r3); // lwz @ 0x808C28C8
    r3 = *(0 + r3); // lwz @ 0x808C28CC
    FUN_80694774(); // bl 0x80694774
    if (==) goto 0x0x808c28e8;
    r3 = *(0 + r31); // lwz @ 0x808C28DC
    r3 = *(0 + r3); // lwz @ 0x808C28E0
    FUN_80685E54(); // bl 0x80685E54
    /* lis r3, 0 */ // 0x808C28E8
    r3 = *(0 + r3); // lwz @ 0x808C28EC
    r3 = *(0 + r3); // lwz @ 0x808C28F0
    r3 = *(0 + r3); // lwz @ 0x808C28F4
    FUN_808CF8D8(r3); // bl 0x808CF8D8
    if (==) goto 0x0x808c2910;
    r3 = *(0x4c + r30); // lwz @ 0x808C2904
    r0 = r3 + -1; // 0x808C2908
    *(0x4c + r30) = r0; // stw @ 0x808C290C
    /* lis r3, 0 */ // 0x808C2910
    r3 = *(0 + r3); // lwz @ 0x808C2914
    r3 = *(0 + r3); // lwz @ 0x808C2918
    r0 = *(0 + r3); // lwz @ 0x808C291C
    if (!=) goto 0x0x808c2930;
    /* li r0, 0x6c */ // 0x808C2928
    *(0x3ec + r30) = r0; // stw @ 0x808C292C
    r12 = *(0 + r30); // lwz @ 0x808C2930
    r3 = r30;
    r12 = *(0x70 + r12); // lwz @ 0x808C2938
    /* mtctr r12 */ // 0x808C293C
    /* bctrl  */ // 0x808C2940
    /* li r4, 2 */ // 0x808C2944
    FUN_8066A380(r3, r4); // bl 0x8066A380
    r3 = r30;
    FUN_808B2D44(r4, r3); // bl 0x808B2D44
    r0 = *(0x14 + r1); // lwz @ 0x808C2954
    r31 = *(0xc + r1); // lwz @ 0x808C2958
    r30 = *(8 + r1); // lwz @ 0x808C295C
    return;
}
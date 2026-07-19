/* Function at 0x808C3898, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808C3898(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808C38A0
    /* slwi r0, r3, 2 */ // 0x808C38A8
    *(0xc + r1) = r31; // stw @ 0x808C38AC
    *(8 + r1) = r30; // stw @ 0x808C38B0
    r3 = *(0 + r4); // lwz @ 0x808C38B4
    r3 = *(0 + r3); // lwz @ 0x808C38B8
    r3 = r3 + r0; // 0x808C38BC
    r30 = *(8 + r3); // lwz @ 0x808C38C0
    if (!=) goto 0x0x808c38d4;
    /* li r30, 0 */ // 0x808C38CC
    /* b 0x808c3928 */ // 0x808C38D0
    /* lis r31, 0 */ // 0x808C38D4
    r31 = r31 + 0; // 0x808C38D8
    if (==) goto 0x0x808c3924;
    r12 = *(0 + r30); // lwz @ 0x808C38E0
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808C38E8
    /* mtctr r12 */ // 0x808C38EC
    /* bctrl  */ // 0x808C38F0
    /* b 0x808c390c */ // 0x808C38F4
    if (!=) goto 0x0x808c3908;
    /* li r0, 1 */ // 0x808C3900
    /* b 0x808c3918 */ // 0x808C3904
    r3 = *(0 + r3); // lwz @ 0x808C3908
    if (!=) goto 0x0x808c38f8;
    /* li r0, 0 */ // 0x808C3914
    if (==) goto 0x0x808c3924;
    /* b 0x808c3928 */ // 0x808C3920
    /* li r30, 0 */ // 0x808C3924
    if (!=) goto 0x0x808c3938;
    /* li r30, 0 */ // 0x808C3930
    /* b 0x808c398c */ // 0x808C3934
    /* lis r31, 0 */ // 0x808C3938
    r31 = r31 + 0; // 0x808C393C
    if (==) goto 0x0x808c3988;
    r12 = *(0 + r30); // lwz @ 0x808C3944
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808C394C
    /* mtctr r12 */ // 0x808C3950
    /* bctrl  */ // 0x808C3954
    /* b 0x808c3970 */ // 0x808C3958
    if (!=) goto 0x0x808c396c;
    /* li r0, 1 */ // 0x808C3964
    /* b 0x808c397c */ // 0x808C3968
    r3 = *(0 + r3); // lwz @ 0x808C396C
    if (!=) goto 0x0x808c395c;
    /* li r0, 0 */ // 0x808C3978
    if (==) goto 0x0x808c3988;
    /* b 0x808c398c */ // 0x808C3984
    /* li r30, 0 */ // 0x808C3988
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808C3990
    r30 = *(8 + r1); // lwz @ 0x808C3994
    r0 = *(0x14 + r1); // lwz @ 0x808C3998
    return;
}
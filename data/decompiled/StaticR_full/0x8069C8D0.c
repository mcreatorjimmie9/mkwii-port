/* Function at 0x8069C8D0, size=356 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_8069C8D0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x8069C8D8
    /* li r0, 5 */ // 0x8069C8E0
    *(0xdc + r1) = r31; // stw @ 0x8069C8E4
    *(0xd8 + r1) = r30; // stw @ 0x8069C8E8
    *(0xd4 + r1) = r29; // stw @ 0x8069C8EC
    r29 = r3;
    *(0x1888 + r3) = r0; // stw @ 0x8069C8F4
    r3 = r3 + 0xf20; // 0x8069C8F8
    FUN_80649EEC(r3); // bl 0x80649EEC
    /* lis r3, 0 */ // 0x8069C900
    r3 = *(0 + r3); // lwz @ 0x8069C904
    r3 = *(0 + r3); // lwz @ 0x8069C908
    r30 = *(0x2a4 + r3); // lwz @ 0x8069C90C
    if (!=) goto 0x0x8069c920;
    /* li r30, 0 */ // 0x8069C918
    /* b 0x8069c974 */ // 0x8069C91C
    /* lis r31, 0 */ // 0x8069C920
    r31 = r31 + 0; // 0x8069C924
    if (==) goto 0x0x8069c970;
    r12 = *(0 + r30); // lwz @ 0x8069C92C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8069C934
    /* mtctr r12 */ // 0x8069C938
    /* bctrl  */ // 0x8069C93C
    /* b 0x8069c958 */ // 0x8069C940
    if (!=) goto 0x0x8069c954;
    /* li r0, 1 */ // 0x8069C94C
    /* b 0x8069c964 */ // 0x8069C950
    r3 = *(0 + r3); // lwz @ 0x8069C954
    if (!=) goto 0x0x8069c944;
    /* li r0, 0 */ // 0x8069C960
    if (==) goto 0x0x8069c970;
    /* b 0x8069c974 */ // 0x8069C96C
    /* li r30, 0 */ // 0x8069C970
    r3 = r30 + 0xa0; // 0x8069C974
    *(0x1918 + r29) = r3; // stw @ 0x8069C978
    r0 = *(0x300 + r30); // lwz @ 0x8069C97C
    if (<=) goto 0x0x8069c99c;
    r3 = r29 + 0x874; // 0x8069C988
    /* li r4, 1 */ // 0x8069C98C
    /* li r5, 1 */ // 0x8069C990
    FUN_8069946C(r3, r4, r5); // bl 0x8069946C
    /* b 0x8069c9ac */ // 0x8069C998
    r3 = r29 + 0x874; // 0x8069C99C
    /* li r4, 0 */ // 0x8069C9A0
    /* li r5, 0 */ // 0x8069C9A4
    FUN_8069946C(r3, r4, r5); // bl 0x8069946C
    /* li r0, 0 */ // 0x8069C9AC
    *(0x191c + r29) = r0; // stw @ 0x8069C9B0
    r3 = *(0x1918 + r29); // lwz @ 0x8069C9B4
    /* li r4, 0 */ // 0x8069C9B8
    FUN_806607EC(r4); // bl 0x806607EC
    r31 = r3;
    r3 = *(0x1918 + r29); // lwz @ 0x8069C9C4
    r4 = *(0x191c + r29); // lwz @ 0x8069C9C8
    FUN_806607C4(r4); // bl 0x806607C4
    r4 = r3;
    r3 = *(0x1880 + r29); // lwz @ 0x8069C9D4
    r5 = r31;
    FUN_80660C30(r4, r5); // bl 0x80660C30
    /* li r0, -1 */ // 0x8069C9E0
    *(0x1920 + r29) = r0; // stw @ 0x8069C9E4
    FUN_80654ECC(r5, r3); // bl 0x80654ECC
    r6 = *(0x191c + r29); // lwz @ 0x8069C9F0
    r3 = r29 + 0xdac; // 0x8069C9F4
    /* li r4, 0x7d9 */ // 0x8069C9FC
    r0 = r6 + 1; // 0x8069CA00
    *(8 + r1) = r0; // stw @ 0x8069CA04
    r6 = *(0x1918 + r29); // lwz @ 0x8069CA08
    r0 = *(0x260 + r6); // lwz @ 0x8069CA0C
    *(0xc + r1) = r0; // stw @ 0x8069CA10
    FUN_806A0A34(); // bl 0x806A0A34
    r0 = *(0xe4 + r1); // lwz @ 0x8069CA18
    r31 = *(0xdc + r1); // lwz @ 0x8069CA1C
    r30 = *(0xd8 + r1); // lwz @ 0x8069CA20
    r29 = *(0xd4 + r1); // lwz @ 0x8069CA24
    return;
}
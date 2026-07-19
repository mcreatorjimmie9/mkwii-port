/* Function at 0x805B2888, size=360 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_805B2888(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805B289C
    *(0x14 + r1) = r29; // stw @ 0x805B28A0
    r0 = *(0x14 + r3); // lwz @ 0x805B28A4
    if (==) goto 0x0x805b28b8;
    /* li r3, 0 */ // 0x805B28B0
    /* b 0x805b29d4 */ // 0x805B28B4
    r30 = *(8 + r3); // lwz @ 0x805B28B8
    /* li r29, 0 */ // 0x805B28BC
    if (>=) goto 0x0x805b28d8;
    /* li r0, 0 */ // 0x805B28C8
    *(8 + r3) = r0; // stw @ 0x805B28CC
    /* li r29, 1 */ // 0x805B28D0
    /* b 0x805b295c */ // 0x805B28D4
    if (>=) goto 0x0x805b28e4;
    /* li r4, 0 */ // 0x805B28DC
    /* b 0x805b2900 */ // 0x805B28E0
    r12 = *(0 + r3); // lwz @ 0x805B28E4
    r12 = *(0x10 + r12); // lwz @ 0x805B28E8
    /* mtctr r12 */ // 0x805B28EC
    /* bctrl  */ // 0x805B28F0
    r3 = r30 * r3; // 0x805B28F4
    r0 = *(4 + r31); // lwz @ 0x805B28F8
    r4 = r0 + r3; // 0x805B28FC
    r12 = *(0 + r31); // lwz @ 0x805B2900
    r3 = r31;
    r12 = *(0x24 + r12); // lwz @ 0x805B2908
    /* mtctr r12 */ // 0x805B290C
    /* bctrl  */ // 0x805B2910
    if (==) goto 0x0x805b295c;
    r4 = *(8 + r31); // lwz @ 0x805B291C
    r3 = r31;
    /* li r29, 1 */ // 0x805B2924
    r0 = r4 + 1; // 0x805B2928
    *(8 + r31) = r0; // stw @ 0x805B292C
    r12 = *(0 + r31); // lwz @ 0x805B2930
    r12 = *(0x10 + r12); // lwz @ 0x805B2934
    /* mtctr r12 */ // 0x805B2938
    /* bctrl  */ // 0x805B293C
    r4 = *(8 + r31); // lwz @ 0x805B2940
    r0 = *(0xc + r31); // lwz @ 0x805B2944
    r3 = r4 * r3; // 0x805B2948
    if (<) goto 0x0x805b295c;
    /* li r0, 2 */ // 0x805B2954
    *(0x14 + r31) = r0; // stw @ 0x805B2958
    r0 = *(0x14 + r31); // lwz @ 0x805B295C
    if (!=) goto 0x0x805b29d0;
    r30 = *(8 + r31); // lwz @ 0x805B2968
    if (>=) goto 0x0x805b297c;
    /* li r4, 0 */ // 0x805B2974
    /* b 0x805b299c */ // 0x805B2978
    r12 = *(0 + r31); // lwz @ 0x805B297C
    r3 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x805B2984
    /* mtctr r12 */ // 0x805B2988
    /* bctrl  */ // 0x805B298C
    r3 = r30 * r3; // 0x805B2990
    r0 = *(4 + r31); // lwz @ 0x805B2994
    r4 = r0 + r3; // 0x805B2998
    if (==) goto 0x0x805b29ac;
    /* li r0, 0 */ // 0x805B29A4
    *(0x10 + r31) = r0; // sth @ 0x805B29A8
    r5 = *(0x10 + r31); // lha @ 0x805B29AC
    r3 = r31;
    r0 = r5 + 1; // 0x805B29B4
    *(0x10 + r31) = r0; // sth @ 0x805B29B8
    r12 = *(0 + r31); // lwz @ 0x805B29BC
    r12 = *(0x20 + r12); // lwz @ 0x805B29C0
    /* mtctr r12 */ // 0x805B29C4
    /* bctrl  */ // 0x805B29C8
    /* b 0x805b29d4 */ // 0x805B29CC
    /* li r3, 0 */ // 0x805B29D0
    r0 = *(0x24 + r1); // lwz @ 0x805B29D4
    r31 = *(0x1c + r1); // lwz @ 0x805B29D8
    r30 = *(0x18 + r1); // lwz @ 0x805B29DC
    r29 = *(0x14 + r1); // lwz @ 0x805B29E0
    return;
}
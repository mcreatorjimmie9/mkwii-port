/* Function at 0x808B7F68, size=768 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 14 function(s) */

int FUN_808B7F68(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x808B7F70
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x808B7F80
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808B7F88
    *(0x10 + r1) = r28; // stw @ 0x808B7F8C
    r3 = *(0 + r5); // lwz @ 0x808B7F90
    r3 = *(0 + r3); // lwz @ 0x808B7F94
    r28 = *(0x204 + r3); // lwz @ 0x808B7F98
    if (!=) goto 0x0x808b7fac;
    /* li r28, 0 */ // 0x808B7FA4
    /* b 0x808b8000 */ // 0x808B7FA8
    /* lis r29, 0 */ // 0x808B7FAC
    r29 = r29 + 0; // 0x808B7FB0
    if (==) goto 0x0x808b7ffc;
    r12 = *(0 + r28); // lwz @ 0x808B7FB8
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x808B7FC0
    /* mtctr r12 */ // 0x808B7FC4
    /* bctrl  */ // 0x808B7FC8
    /* b 0x808b7fe4 */ // 0x808B7FCC
    if (!=) goto 0x0x808b7fe0;
    /* li r0, 1 */ // 0x808B7FD8
    /* b 0x808b7ff0 */ // 0x808B7FDC
    r3 = *(0 + r3); // lwz @ 0x808B7FE0
    if (!=) goto 0x0x808b7fd0;
    /* li r0, 0 */ // 0x808B7FEC
    if (==) goto 0x0x808b7ffc;
    /* b 0x808b8000 */ // 0x808B7FF8
    /* li r28, 0 */ // 0x808B7FFC
    r12 = *(0 + r30); // lwz @ 0x808B8000
    r3 = r30;
    r12 = *(0x70 + r12); // lwz @ 0x808B8008
    /* mtctr r12 */ // 0x808B800C
    /* bctrl  */ // 0x808B8010
    /* mulli r0, r31, 0x5c */ // 0x808B8014
    r3 = r3 + r0; // 0x808B8018
    r0 = *(0xa4 + r3); // lbz @ 0x808B801C
    if (!=) goto 0x0x808b80f0;
    /* clrlwi r4, r31, 0x18 */ // 0x808B8028
    /* mulli r5, r4, 0xc */ // 0x808B802C
    r3 = r28 + r5; // 0x808B8030
    r0 = *(0x5d + r3); // lbz @ 0x808B8034
    if (!=) goto 0x0x808b80f0;
    /* lis r3, 0 */ // 0x808B8040
    r3 = *(0 + r3); // lwz @ 0x808B8044
    if (==) goto 0x0x808b8074;
    r0 = *(0x14 + r3); // lwz @ 0x808B8050
    if (==) goto 0x0x808b8074;
    r3 = r0 + r5; // 0x808B805C
    r3 = *(0x18 + r3); // lwz @ 0x808B8060
    if (==) goto 0x0x808b8074;
    /* li r5, 0 */ // 0x808B806C
    FUN_808E08F0(r5); // bl 0x808E08F0
    /* slwi r5, r31, 2 */ // 0x808B8074
    r3 = r30 + r5; // 0x808B8078
    r0 = *(0x35c + r3); // lwz @ 0x808B807C
    if (!=) goto 0x0x808b80bc;
    /* lis r3, 0 */ // 0x808B8088
    /* li r4, 0 */ // 0x808B808C
    r3 = *(0 + r3); // lwz @ 0x808B8090
    r0 = *(0x98 + r3); // lwz @ 0x808B8094
    r3 = r0 + r5; // 0x808B8098
    r3 = *(0x12c + r3); // lwz @ 0x808B809C
    FUN_808AF914(r4); // bl 0x808AF914
    /* mulli r0, r31, 0x178 */ // 0x808B80A4
    r6 = *(0x910 + r30); // lwz @ 0x808B80A8
    r4 = r3;
    /* li r5, 0 */ // 0x808B80B0
    r3 = r6 + r0; // 0x808B80B4
    FUN_806A0A34(r4, r5); // bl 0x806A0A34
    r12 = *(0 + r30); // lwz @ 0x808B80BC
    r3 = r30;
    r12 = *(0x70 + r12); // lwz @ 0x808B80C4
    /* mtctr r12 */ // 0x808B80C8
    /* bctrl  */ // 0x808B80CC
    r4 = r31;
    /* li r5, 1 */ // 0x808B80D4
    FUN_8066B6CC(r4, r5); // bl 0x8066B6CC
    r3 = r30;
    /* li r4, 6 */ // 0x808B80E0
    /* li r5, -1 */ // 0x808B80E4
    FUN_806724B8(r5, r3, r4, r5); // bl 0x806724B8
    /* b 0x808b8248 */ // 0x808B80EC
    if (!=) goto 0x0x808b8248;
    /* lis r29, 0 */ // 0x808B80F8
    r3 = *(0 + r29); // lwz @ 0x808B80FC
    r3 = *(0 + r3); // lwz @ 0x808B8100
    r3 = *(0 + r3); // lwz @ 0x808B8104
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (==) goto 0x0x808b8168;
    r3 = *(0x90c + r30); // lwz @ 0x808B8114
    if (==) goto 0x0x808b812c;
    r0 = *(4 + r3); // lbz @ 0x808B8120
    if (!=) goto 0x0x808b8248;
    /* lis r6, 0 */ // 0x808B812C
    /* lis r3, 0 */ // 0x808B8130
    r4 = *(0 + r6); // lwz @ 0x808B8134
    /* li r0, -1 */ // 0x808B8138
    /* lfs f1, 0(r3) */ // 0x808B813C
    r3 = r30;
    r5 = *(0x98 + r4); // lwz @ 0x808B8144
    /* li r4, 1 */ // 0x808B8148
    *(0x220 + r5) = r0; // stw @ 0x808B814C
    r5 = *(0 + r6); // lwz @ 0x808B8150
    r5 = *(0x98 + r5); // lwz @ 0x808B8154
    *(0x22c + r5) = r0; // stw @ 0x808B8158
    *(0x3e8 + r30) = r0; // stw @ 0x808B815C
    FUN_80671C48(); // bl 0x80671C48
    /* b 0x808b8248 */ // 0x808B8164
    r3 = *(0 + r29); // lwz @ 0x808B8168
    r3 = *(0 + r3); // lwz @ 0x808B816C
    r3 = *(0 + r3); // lwz @ 0x808B8170
    FUN_808CF914(); // bl 0x808CF914
    if (==) goto 0x0x808b81a0;
    /* lis r4, 0 */ // 0x808B8180
    /* li r0, -1 */ // 0x808B8184
    /* lfs f1, 0(r4) */ // 0x808B8188
    r3 = r30;
    *(0x3e8 + r30) = r0; // stw @ 0x808B8190
    /* li r4, 1 */ // 0x808B8194
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* b 0x808b8248 */ // 0x808B819C
    r3 = *(0 + r29); // lwz @ 0x808B81A0
    r3 = *(0 + r3); // lwz @ 0x808B81A4
    r3 = *(0 + r3); // lwz @ 0x808B81A8
    FUN_808CF934(); // bl 0x808CF934
    if (==) goto 0x0x808b81d8;
    /* lis r4, 0 */ // 0x808B81B8
    /* li r0, -1 */ // 0x808B81BC
    /* lfs f1, 0(r4) */ // 0x808B81C0
    r3 = r30;
    *(0x3e8 + r30) = r0; // stw @ 0x808B81C8
    /* li r4, 1 */ // 0x808B81CC
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* b 0x808b8248 */ // 0x808B81D4
    r3 = *(0 + r29); // lwz @ 0x808B81D8
    r3 = *(0 + r3); // lwz @ 0x808B81DC
    r0 = *(0 + r3); // lwz @ 0x808B81E0
    if (<) goto 0x0x808b81f4;
    if (<=) goto 0x0x808b8200;
    if (==) goto 0x0x808b8218;
    /* b 0x808b8230 */ // 0x808B81FC
    /* lis r4, 0 */ // 0x808B8200
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x808B8208
    /* li r4, 0x7d */ // 0x808B820C
    FUN_808B40AC(r4, r3, r4); // bl 0x808B40AC
    /* b 0x808b8248 */ // 0x808B8214
    /* lis r4, 0 */ // 0x808B8218
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x808B8220
    /* li r4, 0x82 */ // 0x808B8224
    FUN_808B40AC(r4, r3, r4); // bl 0x808B40AC
    /* b 0x808b8248 */ // 0x808B822C
    if (!=) goto 0x0x808b8248;
    /* lis r4, 0 */ // 0x808B8238
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x808B8240
    FUN_808B3BEC(r4, r3); // bl 0x808B3BEC
    r0 = *(0x24 + r1); // lwz @ 0x808B8248
    r31 = *(0x1c + r1); // lwz @ 0x808B824C
    r30 = *(0x18 + r1); // lwz @ 0x808B8250
    r29 = *(0x14 + r1); // lwz @ 0x808B8254
    r28 = *(0x10 + r1); // lwz @ 0x808B8258
    return;
}
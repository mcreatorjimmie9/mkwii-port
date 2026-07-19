/* Function at 0x8088533C, size=268 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8088533C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8088534C
    r31 = r31 + 0; // 0x80885350
    *(0x28 + r1) = r30; // stw @ 0x80885354
    r30 = r3;
    *(0x24 + r1) = r29; // stw @ 0x8088535C
    r8 = *(0x140 + r3); // lha @ 0x80885360
    r5 = *(0x13e + r3); // lha @ 0x80885364
    r0 = r4 / r8; // 0x80885368
    r6 = *(0x142 + r3); // lha @ 0x8088536C
    /* subf r7, r5, r6 */ // 0x80885370
    r0 = r0 * r8; // 0x80885374
    /* subf r29, r0, r4 */ // 0x80885378
    if (>=) goto 0x0x80885390;
    /* li r0, 0 */ // 0x80885384
    *(0x104 + r3) = r0; // stw @ 0x80885388
    /* b 0x808853ec */ // 0x8088538C
    if (>) goto 0x0x808853bc;
    if (>=) goto 0x0x808853bc;
    r4 = *(0x13c + r3); // lha @ 0x808853A0
    /* li r0, 1 */ // 0x808853A4
    *(0x104 + r3) = r0; // stw @ 0x808853A8
    /* srwi r0, r4, 0x1f */ // 0x808853AC
    r0 = r0 + r4; // 0x808853B0
    r29 = r0 >> 1; // srawi
    /* b 0x808853ec */ // 0x808853B8
    if (>) goto 0x0x808853e0;
    /* subf r0, r5, r8 */ // 0x808853C4
    if (>=) goto 0x0x808853e0;
    /* li r0, 2 */ // 0x808853D0
    *(0x104 + r3) = r0; // stw @ 0x808853D4
    /* subf r29, r5, r29 */ // 0x808853D8
    /* b 0x808853ec */ // 0x808853DC
    /* li r0, 3 */ // 0x808853E0
    *(0x104 + r3) = r0; // stw @ 0x808853E4
    r29 = *(0x13c + r3); // lha @ 0x808853E8
    if (==) goto 0x0x80885410;
    r3 = *(0x13c + r3); // lha @ 0x808853F4
    /* srwi r0, r3, 0x1f */ // 0x808853F8
    r0 = r0 + r3; // 0x808853FC
    r3 = r0 >> 1; // srawi
    r0 = r3 + 1; // 0x80885404
    if (!=) goto 0x0x80885420;
    /* lfs f1, 0(r31) */ // 0x80885410
    r3 = r30;
    /* li r4, 0x2a2 */ // 0x80885418
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    /* xoris r0, r29, 0x8000 */ // 0x80885420
    /* lis r29, 0x4330 */ // 0x80885424
    *(0xc + r1) = r0; // stw @ 0x80885428
    /* lfd f2, 8(r31) */ // 0x8088542C
    *(8 + r1) = r29; // stw @ 0x80885430
    /* lfs f0, 0x148(r30) */ // 0x80885434
    /* lfd f1, 8(r1) */ // 0x80885438
    /* fsubs f1, f1, f2 */ // 0x8088543C
    /* fmuls f1, f0, f1 */ // 0x80885440
    FUN_805E3430(); // bl 0x805E3430
}
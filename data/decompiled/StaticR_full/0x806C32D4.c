/* Function at 0x806C32D4, size=392 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806C32D4(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x806C32DC
    r31 = r3;
    r3 = r3 + 0x578; // 0x806C32EC
    *(0xd8 + r1) = r30; // stw @ 0x806C32F0
    *(0xd4 + r1) = r29; // stw @ 0x806C32F4
    FUN_80649EEC(r3); // bl 0x80649EEC
    r3 = r31 + 0x290; // 0x806C32FC
    /* li r4, 0xfa3 */ // 0x806C3300
    /* li r5, 0 */ // 0x806C3304
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    /* lis r3, 0 */ // 0x806C330C
    r5 = *(0 + r3); // lwz @ 0x806C3310
    r0 = *(0x36 + r5); // lha @ 0x806C3314
    if (<) goto 0x0x806c333c;
    /* lis r3, 1 */ // 0x806C3320
    /* clrlwi r4, r0, 0x18 */ // 0x806C3324
    r0 = r3 + -0x6c10; // 0x806C3328
    r0 = r0 * r4; // 0x806C332C
    r3 = r5 + r0; // 0x806C3330
    r3 = r3 + 0x38; // 0x806C3334
    /* b 0x806c3340 */ // 0x806C3338
    /* li r3, 0 */ // 0x806C333C
    /* addis r3, r3, 1 */ // 0x806C3340
    r30 = *(-0x6d74 + r3); // lwz @ 0x806C3344
    if (>) goto 0x0x806c3358;
    /* li r29, 0x1397 */ // 0x806C3350
    /* b 0x806c33e4 */ // 0x806C3354
    if (>=) goto 0x0x806c3388;
    if (>=) goto 0x0x806c337c;
    if (>=) goto 0x0x806c33b0;
    if (>=) goto 0x0x806c33a8;
    /* b 0x806c33e0 */ // 0x806C3378
    if (>=) goto 0x0x806c33c0;
    /* b 0x806c33b8 */ // 0x806C3384
    if (>=) goto 0x0x806c339c;
    if (>=) goto 0x0x806c33d0;
    /* b 0x806c33c8 */ // 0x806C3398
    if (>=) goto 0x0x806c33e0;
    /* b 0x806c33d8 */ // 0x806C33A4
    /* li r29, 0x1399 */ // 0x806C33A8
    /* b 0x806c33e4 */ // 0x806C33AC
    /* li r29, 0x139a */ // 0x806C33B0
    /* b 0x806c33e4 */ // 0x806C33B4
    /* li r29, 0x139b */ // 0x806C33B8
    /* b 0x806c33e4 */ // 0x806C33BC
    /* li r29, 0x139c */ // 0x806C33C0
    /* b 0x806c33e4 */ // 0x806C33C4
    /* li r29, 0x139d */ // 0x806C33C8
    /* b 0x806c33e4 */ // 0x806C33CC
    /* li r29, 0x139e */ // 0x806C33D0
    /* b 0x806c33e4 */ // 0x806C33D4
    /* li r29, 0x139f */ // 0x806C33D8
    /* b 0x806c33e4 */ // 0x806C33DC
    /* li r29, 0x13a0 */ // 0x806C33E0
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806C33EC
    *(8 + r1) = r30; // stw @ 0x806C33F0
    r5 = *(0 + r3); // lwz @ 0x806C33F4
    r0 = *(0x36 + r5); // lha @ 0x806C33F8
    if (<) goto 0x0x806c3420;
    /* lis r3, 1 */ // 0x806C3404
    /* clrlwi r4, r0, 0x18 */ // 0x806C3408
    r0 = r3 + -0x6c10; // 0x806C340C
    r0 = r0 * r4; // 0x806C3410
    r3 = r5 + r0; // 0x806C3414
    r3 = r3 + 0x38; // 0x806C3418
    /* b 0x806c3424 */ // 0x806C341C
    /* li r3, 0 */ // 0x806C3420
    /* addis r3, r3, 1 */ // 0x806C3424
    r4 = r29;
    r0 = *(-0x6d70 + r3); // lwz @ 0x806C342C
    r3 = r31 + 0x404; // 0x806C3430
    *(0xc + r1) = r0; // stw @ 0x806C3434
    FUN_806A0A34(r4, r3, r5); // bl 0x806A0A34
    r0 = *(0xe4 + r1); // lwz @ 0x806C3440
    r31 = *(0xdc + r1); // lwz @ 0x806C3444
    r30 = *(0xd8 + r1); // lwz @ 0x806C3448
    r29 = *(0xd4 + r1); // lwz @ 0x806C344C
    return;
}
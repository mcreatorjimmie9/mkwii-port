/* Function at 0x806AD39C, size=264 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_806AD39C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x806AD3A4
    *(0x14 + r1) = r29; // stw @ 0x806AD3B4
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806AD3BC
    r28 = r3;
    r3 = *(0 + r5); // lwz @ 0x806AD3C4
    r3 = *(0 + r3); // lwz @ 0x806AD3C8
    r30 = *(0x244 + r3); // lwz @ 0x806AD3CC
    if (!=) goto 0x0x806ad3e0;
    /* li r30, 0 */ // 0x806AD3D8
    /* b 0x806ad434 */ // 0x806AD3DC
    /* lis r31, 0 */ // 0x806AD3E0
    r31 = r31 + 0; // 0x806AD3E4
    if (==) goto 0x0x806ad430;
    r12 = *(0 + r30); // lwz @ 0x806AD3EC
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806AD3F4
    /* mtctr r12 */ // 0x806AD3F8
    /* bctrl  */ // 0x806AD3FC
    /* b 0x806ad418 */ // 0x806AD400
    if (!=) goto 0x0x806ad414;
    /* li r0, 1 */ // 0x806AD40C
    /* b 0x806ad424 */ // 0x806AD410
    r3 = *(0 + r3); // lwz @ 0x806AD414
    if (!=) goto 0x0x806ad404;
    /* li r0, 0 */ // 0x806AD420
    if (==) goto 0x0x806ad430;
    /* b 0x806ad434 */ // 0x806AD42C
    /* li r30, 0 */ // 0x806AD430
    r0 = *(0x240 + r29); // lwz @ 0x806AD434
    if (==) goto 0x0x806ad44c;
    if (==) goto 0x0x806ad45c;
    /* b 0x806ad468 */ // 0x806AD448
    r3 = r30;
    /* li r4, 0 */ // 0x806AD450
    FUN_80679484(r3, r4); // bl 0x80679484
    /* b 0x806ad468 */ // 0x806AD458
    r3 = r30;
    /* li r4, 1 */ // 0x806AD460
    FUN_80679484(r4, r3, r4); // bl 0x80679484
    /* li r0, 0x8f */ // 0x806AD468
    *(0xcac + r28) = r0; // stw @ 0x806AD46C
    r3 = r29;
    FUN_8064A384(r4, r3); // bl 0x8064A384
    r3 = r28;
    /* li r4, 0 */ // 0x806AD47C
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x806AD484
    r31 = *(0x1c + r1); // lwz @ 0x806AD488
    r30 = *(0x18 + r1); // lwz @ 0x806AD48C
    r29 = *(0x14 + r1); // lwz @ 0x806AD490
    r28 = *(0x10 + r1); // lwz @ 0x806AD494
    return;
}
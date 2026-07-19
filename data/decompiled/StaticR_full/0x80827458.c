/* Function at 0x80827458, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80827458(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r0 = r5 rlwinm 4; // rlwinm
    r0 = r4 | r0; // 0x80827468
    /* lis r5, 0 */ // 0x8082746C
    *(0x1c + r1) = r31; // stw @ 0x80827470
    /* lis r31, 0 */ // 0x80827474
    /* lis r4, 0 */ // 0x80827478
    *(0x18 + r1) = r30; // stw @ 0x8082747C
    *(0x14 + r1) = r29; // stw @ 0x80827480
    r29 = r3;
    r7 = *(0 + r31); // lwz @ 0x80827488
    *(2 + r7) = r6; // sth @ 0x8082748C
    r3 = *(0 + r31); // lwz @ 0x80827490
    *(4 + r3) = r0; // stb @ 0x80827494
    r3 = *(0 + r31); // lwz @ 0x80827498
    r0 = *(0 + r5); // lwz @ 0x8082749C
    *(0 + r3) = r0; // sth @ 0x808274A0
    r30 = *(0 + r4); // lwz @ 0x808274A4
    r3 = r30;
    FUN_806E4428(r3); // bl 0x806E4428
    /* li r0, 5 */ // 0x808274B0
    if (<) goto 0x0x808274e8;
    r3 = r30;
    FUN_806E4370(r3); // bl 0x806E4370
    if (==) goto 0x0x808274e8;
    r6 = *(0 + r31); // lwz @ 0x808274CC
    r3 = r30;
    r4 = r29;
    /* li r5, 4 */ // 0x808274D8
    /* li r7, 5 */ // 0x808274DC
    FUN_806E4364(r3, r4, r5, r7); // bl 0x806E4364
    /* b 0x80827508 */ // 0x808274E4
    /* lis r3, 0 */ // 0x808274E8
    /* lis r5, 0 */ // 0x808274EC
    r6 = *(0 + r5); // lwz @ 0x808274F0
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x808274F8
    /* li r5, 4 */ // 0x808274FC
    /* li r7, 5 */ // 0x80827500
    FUN_80827080(r4, r5, r7); // bl 0x80827080
    r31 = *(0x1c + r1); // lwz @ 0x80827508
    /* lis r3, 0 */ // 0x8082750C
    r30 = *(0x18 + r1); // lwz @ 0x80827510
    r29 = *(0x14 + r1); // lwz @ 0x80827514
    r0 = *(0x24 + r1); // lwz @ 0x80827518
    r3 = *(0 + r3); // lwz @ 0x8082751C
    return;
}
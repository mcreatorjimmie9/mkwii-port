/* Function at 0x8081840C, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8081840C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x80818414
    /* lis r4, 0 */ // 0x80818418
    *(0x1c + r1) = r31; // stw @ 0x80818420
    *(0x18 + r1) = r30; // stw @ 0x80818424
    *(0x14 + r1) = r29; // stw @ 0x80818428
    r29 = r3;
    r7 = *(0 + r5); // lwz @ 0x80818430
    /* lis r5, 0 */ // 0x80818434
    r0 = *(0 + r4); // lbz @ 0x80818438
    r4 = r3 rlwinm 2; // rlwinm
    r6 = *(0xc + r7); // lwz @ 0x80818440
    r3 = *(0 + r5); // lwz @ 0x80818444
    /* lwzx r4, r6, r4 */ // 0x8081844C
    r30 = *(0x24 + r3); // lbz @ 0x80818450
    r31 = *(0x20 + r4); // lbz @ 0x80818454
    if (==) goto 0x0x8081848c;
    r3 = r7;
    /* li r4, 4 */ // 0x80818460
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (!=) goto 0x0x8081848c;
    /* lis r3, 0 */ // 0x80818470
    r0 = *(0 + r3); // lwz @ 0x80818474
    r3 = r0 + r29; // 0x80818478
    r0 = *(0x161 + r3); // lbz @ 0x8081847C
    if (<=) goto 0x0x8081848c;
    r31 = r0;
    /* clrlwi r5, r31, 0x18 */ // 0x8081848C
    if (!=) goto 0x0x808184a0;
    /* li r3, 0 */ // 0x80818498
    /* b 0x808184c4 */ // 0x8081849C
    r0 = r30 + -1; // 0x808184A0
    /* lis r4, 0 */ // 0x808184A4
    /* slwi r0, r0, 2 */ // 0x808184A8
    /* li r3, 2 */ // 0x808184AC
    r4 = r4 + 0; // 0x808184B0
    /* lwzx r0, r4, r0 */ // 0x808184B4
    if (>) goto 0x0x808184c4;
    /* li r3, 1 */ // 0x808184C0
    r0 = *(0x24 + r1); // lwz @ 0x808184C4
    r31 = *(0x1c + r1); // lwz @ 0x808184C8
    r30 = *(0x18 + r1); // lwz @ 0x808184CC
    r29 = *(0x14 + r1); // lwz @ 0x808184D0
    return;
}
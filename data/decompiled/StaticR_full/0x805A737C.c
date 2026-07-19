/* Function at 0x805A737C, size=264 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805A737C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x805A738C
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x805A7398
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805A73A0
    r28 = r3;
    /* b 0x805a7424 */ // 0x805A73A8
    /* clrlwi r4, r31, 0x10 */ // 0x805A73B0
    /* li r3, 0 */ // 0x805A73B4
    if (==) goto 0x0x805a73cc;
    r0 = *(4 + r5); // lhz @ 0x805A73BC
    if (==) goto 0x0x805a73cc;
    /* li r3, 1 */ // 0x805A73C8
    if (==) goto 0x0x805a73dc;
    r0 = *(4 + r5); // lhz @ 0x805A73D4
    /* b 0x805a73e0 */ // 0x805A73D8
    /* li r0, 0 */ // 0x805A73DC
    if (>=) goto 0x0x805a7410;
    r0 = *(4 + r5); // lhz @ 0x805A73E8
    /* clrlwi r3, r31, 0x10 */ // 0x805A73EC
    if (>=) goto 0x0x805a7408;
    r3 = *(0 + r5); // lwz @ 0x805A73F8
    r0 = r31 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A7400
    /* b 0x805a7414 */ // 0x805A7404
    /* li r3, 0 */ // 0x805A7408
    /* b 0x805a7414 */ // 0x805A740C
    /* li r3, 0 */ // 0x805A7410
    r4 = r29;
    r5 = r30;
    FUN_805A7484(r3, r3, r4, r5); // bl 0x805A7484
    r31 = r31 + 1; // 0x805A7420
    r5 = *(0xc + r28); // lwz @ 0x805A7424
    /* li r3, 0 */ // 0x805A7428
    if (==) goto 0x0x805a7444;
    r0 = *(4 + r5); // lhz @ 0x805A7434
    if (==) goto 0x0x805a7444;
    /* li r3, 1 */ // 0x805A7440
    /* clrlwi r3, r31, 0x10 */ // 0x805A7448
    if (==) goto 0x0x805a7458;
    r0 = *(4 + r5); // lhz @ 0x805A7450
    /* b 0x805a745c */ // 0x805A7454
    /* li r0, 0 */ // 0x805A7458
    if (<) goto 0x0x805a73ac;
    r0 = *(0x24 + r1); // lwz @ 0x805A7464
    r31 = *(0x1c + r1); // lwz @ 0x805A7468
    r30 = *(0x18 + r1); // lwz @ 0x805A746C
    r29 = *(0x14 + r1); // lwz @ 0x805A7470
    r28 = *(0x10 + r1); // lwz @ 0x805A7474
    return;
}
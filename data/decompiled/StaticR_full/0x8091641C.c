/* Function at 0x8091641C, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8091641C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8091642C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80916434
    r30 = r3;
    if (==) goto 0x0x8091648c;
    /* lis r5, 0 */ // 0x80916440
    /* addic. r0, r3, 0xb0 */ // 0x80916444
    r4 = *(0 + r5); // lhz @ 0x80916448
    r0 = r4 + -1; // 0x8091644C
    *(0 + r5) = r0; // sth @ 0x80916450
    if (==) goto 0x0x8091647c;
    r0 = *(0xb0 + r3); // lwz @ 0x80916458
    if (==) goto 0x0x80916474;
    /* lis r4, 0 */ // 0x80916464
    r3 = *(0xb4 + r3); // lwz @ 0x80916468
    r4 = r4 + 0; // 0x8091646C
    FUN_805E3430(r4, r4); // bl 0x805E3430
    /* li r0, 0 */ // 0x80916474
    *(0xb0 + r30) = r0; // stw @ 0x80916478
    if (<=) goto 0x0x8091648c;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80916490
    r30 = *(8 + r1); // lwz @ 0x80916494
    r0 = *(0x14 + r1); // lwz @ 0x80916498
    return;
}
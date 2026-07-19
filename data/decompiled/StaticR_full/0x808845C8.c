/* Function at 0x808845C8, size=196 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_808845C8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x808845E0
    r28 = r3;
    FUN_808A2028(); // bl 0x808A2028
    r3 = r28;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r29 = *(0xc0 + r28); // lwz @ 0x808845F4
    r31 = r28 + 0x58; // 0x808845F8
    /* li r30, 0 */ // 0x808845FC
    r3 = *(0x14 + r29); // lwz @ 0x80884600
    r3 = *(0 + r3); // lwz @ 0x80884604
    if (==) goto 0x0x8088461c;
    r5 = r31;
    /* li r4, 0 */ // 0x80884614
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r30 = r30 + 1; // 0x8088461C
    r29 = r29 + 4; // 0x80884620
    if (<) goto 0x0x80884600;
    r3 = r28;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r29 = *(0xc4 + r28); // lwz @ 0x80884634
    r30 = r28 + 0x58; // 0x80884638
    /* li r31, 0 */ // 0x8088463C
    r3 = *(0x14 + r29); // lwz @ 0x80884640
    r3 = *(0 + r3); // lwz @ 0x80884644
    if (==) goto 0x0x8088465c;
    r5 = r30;
    /* li r4, 0 */ // 0x80884654
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x8088465C
    r29 = r29 + 4; // 0x80884660
    if (<) goto 0x0x80884640;
    r0 = *(0x24 + r1); // lwz @ 0x8088466C
    r31 = *(0x1c + r1); // lwz @ 0x80884670
    r30 = *(0x18 + r1); // lwz @ 0x80884674
    r29 = *(0x14 + r1); // lwz @ 0x80884678
    r28 = *(0x10 + r1); // lwz @ 0x8088467C
    return;
}
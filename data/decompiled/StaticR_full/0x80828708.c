/* Function at 0x80828708, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80828708(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8082871C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80828724
    r29 = r3;
    if (==) goto 0x0x8082878c;
    if (==) goto 0x0x8082877c;
    /* lis r5, 0 */ // 0x80828734
    /* lis r4, 0 */ // 0x80828738
    r5 = r5 + 0; // 0x8082873C
    *(0 + r3) = r5; // stw @ 0x80828740
    r31 = *(0 + r4); // lwz @ 0x80828744
    if (==) goto 0x0x80828770;
    /* li r0, 0 */ // 0x80828750
    *(0 + r4) = r0; // stw @ 0x80828754
    if (==) goto 0x0x80828770;
    r3 = r31;
    /* li r4, -1 */ // 0x80828760
    FUN_8082580C(r3, r4); // bl 0x8082580C
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x80828774
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x8082878c;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x8082878C
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x80828794
    r29 = *(0x14 + r1); // lwz @ 0x80828798
    r0 = *(0x24 + r1); // lwz @ 0x8082879C
    return;
}
/* Function at 0x8081907C, size=84 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_8081907C(int r3, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r3, 0 */ // 0x80819084
    *(0x14 + r1) = r29; // stw @ 0x80819094
    *(0x10 + r1) = r28; // stw @ 0x80819098
    r0 = *(0 + r3); // lwz @ 0x8081909C
    if (!=) goto 0x0x80819198;
    /* li r3, 0x14 */ // 0x808190A8
    FUN_805E3430(r3); // bl 0x805E3430
    r30 = r3;
    if (==) goto 0x0x80819190;
    /* li r0, 0 */ // 0x808190BC
    *(8 + r3) = r0; // stw @ 0x808190C0
    /* lis r31, 0 */ // 0x808190C4
    /* lis r7, 0 */ // 0x808190C8
    *(0xc + r3) = r0; // stw @ 0x808190CC
}
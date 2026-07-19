/* Function at 0x8082B414, size=64 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8082B414(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8082B41C
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x8082B42C
    *(0x24 + r1) = r29; // stw @ 0x8082B430
    r3 = *(0 + r4); // lwz @ 0x8082B434
    r0 = *(0xb74 + r3); // lwz @ 0x8082B438
    if (!=) goto 0x0x8082b468;
    /* li r3, 0x4c */ // 0x8082B444
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8082b488;
}
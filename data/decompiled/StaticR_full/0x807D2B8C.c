/* Function at 0x807D2B8C, size=84 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_807D2B8C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x807D2B94
    *(0x14 + r1) = r29; // stw @ 0x807D2BA4
    *(0x10 + r1) = r28; // stw @ 0x807D2BA8
    r28 = r3;
    r3 = *(0 + r4); // lwz @ 0x807D2BB0
    /* li r4, 0 */ // 0x807D2BB4
    r31 = *(0x94 + r3); // lwz @ 0x807D2BB8
    r3 = r31;
    FUN_807D1E48(r4, r3); // bl 0x807D1E48
    r30 = *(0x18 + r3); // lwz @ 0x807D2BC4
    r3 = r31;
    /* li r4, 1 */ // 0x807D2BCC
    FUN_807D1E48(r3, r3, r4); // bl 0x807D1E48
    r29 = *(0x18 + r3); // lwz @ 0x807D2BD4
    /* li r3, 0x44 */ // 0x807D2BD8
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
}
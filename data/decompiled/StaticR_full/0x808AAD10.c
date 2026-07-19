/* Function at 0x808AAD10, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

void FUN_808AAD10(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x808AAD18
    *(0x14 + r1) = r0; // stw @ 0x808AAD1C
    *(0xc + r1) = r31; // stw @ 0x808AAD20
    r0 = *(0 + r3); // lwz @ 0x808AAD24
    if (!=) goto 0x0x808aad94;
    /* li r3, 0x160 */ // 0x808AAD30
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x808aad44;
    FUN_808AA918(r3); // bl 0x808AA918
    /* lis r31, 0 */ // 0x808AAD44
    *(0 + r31) = r3; // stw @ 0x808AAD48
    FUN_8089C71C(); // bl 0x8089C71C
    FUN_808F942C(); // bl 0x808F942C
}
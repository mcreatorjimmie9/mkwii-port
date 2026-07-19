/* Function at 0x8091CCA4, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8091CCA4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8091CCB8
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8091CCC0
    r29 = r3;
    if (==) goto 0x0x8091cd50;
    /* lis r6, 0 */ // 0x8091CCCC
    /* lis r4, 0 */ // 0x8091CCD0
    r5 = *(0 + r6); // lbz @ 0x8091CCD4
    r4 = r4 + 0; // 0x8091CCD8
    r0 = r5 + -1; // 0x8091CCDC
    *(0 + r6) = r0; // stb @ 0x8091CCE0
    r3 = *(0x1c + r3); // lwz @ 0x8091CCE4
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(0x28 + r29); // lwz @ 0x8091CCEC
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0x2c + r29); // lwz @ 0x8091CCF4
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0x30 + r29); // lwz @ 0x8091CCFC
    FUN_805E3430(); // bl 0x805E3430
    /* li r31, 0 */ // 0x8091CD04
    /* b 0x8091cd20 */ // 0x8091CD08
}
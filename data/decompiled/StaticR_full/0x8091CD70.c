/* Function at 0x8091CD70, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8091CD70(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8091CD84
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8091CD8C
    r29 = r3;
    if (==) goto 0x0x8091ce1c;
    /* lis r6, 0 */ // 0x8091CD98
    /* lis r4, 0 */ // 0x8091CD9C
    r5 = *(0 + r6); // lbz @ 0x8091CDA0
    r4 = r4 + 0; // 0x8091CDA4
    r0 = r5 + -1; // 0x8091CDA8
    *(0 + r6) = r0; // stb @ 0x8091CDAC
    r3 = *(0x1c + r3); // lwz @ 0x8091CDB0
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(0x28 + r29); // lwz @ 0x8091CDB8
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0x2c + r29); // lwz @ 0x8091CDC0
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0x30 + r29); // lwz @ 0x8091CDC8
    FUN_805E3430(); // bl 0x805E3430
    /* li r31, 0 */ // 0x8091CDD0
    /* b 0x8091cdec */ // 0x8091CDD4
}
/* Function at 0x80879258, size=104 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80879258(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    r0 = r3;
    *(0x3c + r1) = r31; // stw @ 0x80879268
    r31 = r4;
    r4 = r0;
    *(0x190 + r3) = r5; // stb @ 0x80879274
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r5, 0 */ // 0x80879280
    r6 = r31;
    r5 = r5 + 0; // 0x80879288
    r4 = r5 + 0x97; // 0x80879290
    /* li r7, 0 */ // 0x80879294
    r5 = r5 + 0xa2; // 0x80879298
    FUN_8064E36C(r5, r3, r4, r7, r5); // bl 0x8064E36C
    /* li r4, -1 */ // 0x808792A4
    FUN_8064E32C(r7, r5, r3, r4); // bl 0x8064E32C
    r0 = *(0x44 + r1); // lwz @ 0x808792AC
    r31 = *(0x3c + r1); // lwz @ 0x808792B0
    return;
}
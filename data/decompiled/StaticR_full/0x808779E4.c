/* Function at 0x808779E4, size=104 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808779E4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    r0 = r3;
    *(0x3c + r1) = r31; // stw @ 0x808779F4
    r31 = r4;
    r4 = r0;
    *(0x190 + r3) = r5; // stb @ 0x80877A00
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r5, 0 */ // 0x80877A0C
    r6 = r31;
    r5 = r5 + 0; // 0x80877A14
    r4 = r5 + 0x45; // 0x80877A1C
    /* li r7, 0 */ // 0x80877A20
    r5 = r5 + 0x50; // 0x80877A24
    FUN_8064E36C(r5, r3, r4, r7, r5); // bl 0x8064E36C
    /* li r4, -1 */ // 0x80877A30
    FUN_8064E32C(r7, r5, r3, r4); // bl 0x8064E32C
    r0 = *(0x44 + r1); // lwz @ 0x80877A38
    r31 = *(0x3c + r1); // lwz @ 0x80877A3C
    return;
}
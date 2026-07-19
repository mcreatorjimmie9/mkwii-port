/* Function at 0x808D3A00, size=120 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r24 */
/* Calls: 4 function(s) */

int FUN_808D3A00(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -160(r1) */
    /* saved r24 */
    /* stmw r24, 0x80(r1) */ // 0x808D3A0C
    r24 = r3;
    r25 = r4;
    r26 = r5;
    r27 = r6;
    r4 = r24;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r6, 0 */ // 0x808D3A2C
    r6 = r6 + 0; // 0x808D3A34
    r4 = r6 + 0x15; // 0x808D3A3C
    r5 = r6 + 0x31; // 0x808D3A40
    if (==) goto 0x0x808d3a4c;
    r5 = r6 + 0x1d; // 0x808D3A48
    /* lis r6, 0 */ // 0x808D3A4C
    /* li r7, 0 */ // 0x808D3A50
    r31 = r6 + 0; // 0x808D3A54
    r6 = r31 + 0x44; // 0x808D3A58
    FUN_8064E36C(r5, r6, r7, r6); // bl 0x8064E36C
    r3 = r24;
    r4 = r25;
    FUN_8069FEE8(r6, r3, r4); // bl 0x8069FEE8
    /* mulli r3, r25, 0x17c */ // 0x808D3A6C
    r3 = r3 + 0x10; // 0x808D3A70
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
}
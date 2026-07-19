/* Function at 0x80726D50, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80726D50(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x80726D68
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x80726D70
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80726D78
    r28 = r3;
    if (!=) goto 0x0x80726d8c;
    /* li r3, 0 */ // 0x80726D84
    /* b 0x80726e2c */ // 0x80726D88
    r3 = r4 + 0x74; // 0x80726D8C
    FUN_805E3430(r3, r3); // bl 0x805E3430
    if (!=) goto 0x0x80726da4;
    /* li r3, 0 */ // 0x80726D9C
    /* b 0x80726da8 */ // 0x80726DA0
    r3 = *(0xc + r3); // lwz @ 0x80726DA4
    /* li r0, 0 */ // 0x80726DAC
    if (==) goto 0x0x80726dbc;
}
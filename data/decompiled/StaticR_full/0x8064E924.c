/* Function at 0x8064E924, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_8064E924(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* li r0, 1 */ // 0x8064E930
    /* stmw r27, 0xc(r1) */ // 0x8064E934
    r27 = r3;
    r31 = r4;
    r28 = r5;
    /* li r30, 0 */ // 0x8064E944
    /* li r29, 0 */ // 0x8064E948
    r3 = *(0 + r31); // lwz @ 0x8064E94C
    if (!=) goto 0x0x8064e974;
    if (==) goto 0x0x8064e968;
    /* li r3, -1 */ // 0x8064E960
    /* b 0x8064e9a8 */ // 0x8064E964
    /* li r0, 1 */ // 0x8064E968
    r30 = r30 + 1; // 0x8064E96C
    /* b 0x8064e99c */ // 0x8064E970
    if (==) goto 0x0x8064e99c;
    r4 = r27;
    FUN_805E3430(r4); // bl 0x805E3430
    if (!=) goto 0x0x8064e998;
    *(0 + r28) = r29; // stw @ 0x8064E98C
    r3 = r30;
    /* b 0x8064e9a8 */ // 0x8064E994
    /* li r0, 0 */ // 0x8064E998
    r31 = r31 + 4; // 0x8064E99C
    r29 = r29 + 1; // 0x8064E9A0
}
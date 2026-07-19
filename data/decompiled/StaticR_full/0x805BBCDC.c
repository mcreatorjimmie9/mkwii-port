/* Function at 0x805BBCDC, size=184 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_805BBCDC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -176(r1) */
    /* saved r27 */
    *(0xb4 + r1) = r0; // stw @ 0x805BBCE8
    /* stmw r27, 0x9c(r1) */ // 0x805BBCEC
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    if (!=) goto 0x0x805bbd10;
    r0 = *(0x14 + r3); // lbz @ 0x805BBD04
    if (!=) goto 0x0x805bbd18;
    /* li r0, 1 */ // 0x805BBD10
    *(0x14 + r3) = r0; // stb @ 0x805BBD14
    /* lis r3, 0 */ // 0x805BBD18
    r3 = *(0 + r3); // lwz @ 0x805BBD20
    /* li r5, 1 */ // 0x805BBD24
    FUN_805BAB90(r3, r4, r5); // bl 0x805BAB90
    r31 = r3;
    if (!=) goto 0x0x805bbd74;
    r4 = r28;
    r5 = r29;
    r6 = r30;
    FUN_805BAE54(r4, r5, r6, r3); // bl 0x805BAE54
    r31 = r3;
    FUN_805BAD70(r6, r3, r3); // bl 0x805BAD70
    if (==) goto 0x0x805bbd68;
    /* li r31, 8 */ // 0x805BBD60
    /* b 0x805bbd74 */ // 0x805BBD64
    if (!=) goto 0x0x805bbd74;
    r31 = r3;
    /* li r0, 0 */ // 0x805BBD74
    *(0x14 + r27) = r0; // stb @ 0x805BBD78
    r3 = r31;
    r0 = *(0xb4 + r1); // lwz @ 0x805BBD84
    return;
}
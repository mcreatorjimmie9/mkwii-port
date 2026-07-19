/* Function at 0x80824704, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_80824704(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80824718
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80824720
    r29 = r3;
    if (==) goto 0x0x80824808;
    FUN_8083FE54(); // bl 0x8083FE54
    /* lis r3, 0 */ // 0x80824730
    r0 = *(0 + r3); // lbz @ 0x80824734
    if (==) goto 0x0x80824744;
    FUN_80825BFC(r3); // bl 0x80825BFC
    FUN_80869E00(r3); // bl 0x80869E00
    FUN_8086D764(); // bl 0x8086D764
    /* lis r4, 0 */ // 0x8082474C
    r3 = r29 + 0x48; // 0x80824750
    r4 = r4 + 0; // 0x80824754
    /* li r5, 0x24 */ // 0x80824758
    /* li r6, 0xf */ // 0x8082475C
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    if (==) goto 0x0x808247f8;
    /* lis r4, 0 */ // 0x8082476C
    /* lis r3, 0 */ // 0x80824770
    r4 = r4 + 0; // 0x80824774
    *(0 + r29) = r4; // stw @ 0x80824778
    r31 = *(0 + r3); // lwz @ 0x8082477C
}
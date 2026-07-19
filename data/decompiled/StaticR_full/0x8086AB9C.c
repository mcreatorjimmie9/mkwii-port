/* Function at 0x8086AB9C, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8086AB9C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8086ABA8
    r31 = r3;
    FUN_80823748(); // bl 0x80823748
    r3 = r31 + 0x88; // 0x8086ABB4
    /* li r4, 1 */ // 0x8086ABB8
    FUN_80841FBC(r3, r4); // bl 0x80841FBC
    /* lis r3, 0 */ // 0x8086ABC0
    r0 = *(0 + r3); // lbz @ 0x8086ABC4
    if (==) goto 0x0x8086abdc;
    /* li r3, 8 */ // 0x8086ABD0
    /* li r4, 0xc */ // 0x8086ABD4
    FUN_808272B4(r3, r4); // bl 0x808272B4
    r0 = *(0x14 + r1); // lwz @ 0x8086ABDC
    r31 = *(0xc + r1); // lwz @ 0x8086ABE0
    return;
}
/* Function at 0x8083C6AC, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8083C6AC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8083C6B8
    r31 = r3;
    FUN_80823718(); // bl 0x80823718
    r3 = r31 + 0x88; // 0x8083C6C4
    /* li r4, 1 */ // 0x8083C6C8
    FUN_80841FBC(r3, r4); // bl 0x80841FBC
    /* lis r3, 0 */ // 0x8083C6D0
    r0 = *(0 + r3); // lbz @ 0x8083C6D4
    if (==) goto 0x0x8083c6ec;
    /* li r3, 4 */ // 0x8083C6E0
    /* li r4, 0xc */ // 0x8083C6E4
    FUN_808272B4(r3, r4); // bl 0x808272B4
    r0 = *(0x14 + r1); // lwz @ 0x8083C6EC
    r31 = *(0xc + r1); // lwz @ 0x8083C6F0
    return;
}
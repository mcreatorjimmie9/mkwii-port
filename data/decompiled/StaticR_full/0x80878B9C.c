/* Function at 0x80878B9C, size=200 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80878B9C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80878BA8
    FUN_80876FEC(); // bl 0x80876FEC
    /* lis r4, 0 */ // 0x80878BB0
    /* clrlwi r31, r3, 0x18 */ // 0x80878BB4
    r3 = *(0 + r4); // lwz @ 0x80878BB8
    r3 = *(0 + r3); // lwz @ 0x80878BBC
    r0 = *(0x38b + r3); // lbz @ 0x80878BC0
    if (==) goto 0x0x80878bd4;
    /* li r3, 1 */ // 0x80878BCC
    /* b 0x80878c50 */ // 0x80878BD0
    /* lis r3, 0 */ // 0x80878BD4
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x80878BDC
    FUN_8061D97C(r3, r3, r4); // bl 0x8061D97C
    r3 = *(0 + r3); // lwz @ 0x80878BE4
    r3 = *(4 + r3); // lwz @ 0x80878BE8
    r0 = *(4 + r3); // lwz @ 0x80878BEC
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x80878BF0
    if (==) goto 0x0x80878c00;
    /* li r3, 1 */ // 0x80878BF8
    /* b 0x80878c50 */ // 0x80878BFC
    /* lis r4, 0 */ // 0x80878C00
    /* li r3, 0 */ // 0x80878C04
    r4 = *(0 + r4); // lwz @ 0x80878C08
    /* mulli r0, r31, 0x248 */ // 0x80878C0C
    /* li r5, 0 */ // 0x80878C10
    r4 = *(0x14 + r4); // lwz @ 0x80878C14
    r4 = r4 + r0; // 0x80878C18
    r0 = *(0x58 + r4); // lwz @ 0x80878C1C
    if (!=) goto 0x0x80878c38;
    r0 = *(0x8c + r4); // lwz @ 0x80878C28
    if (!=) goto 0x0x80878c38;
    /* li r5, 1 */ // 0x80878C34
    if (==) goto 0x0x80878c50;
    r0 = *(0x78 + r4); // lwz @ 0x80878C40
    if (!=) goto 0x0x80878c50;
    /* li r3, 1 */ // 0x80878C4C
    r0 = *(0x14 + r1); // lwz @ 0x80878C50
    r31 = *(0xc + r1); // lwz @ 0x80878C54
    return;
}
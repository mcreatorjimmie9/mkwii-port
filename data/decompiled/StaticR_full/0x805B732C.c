/* Function at 0x805B732C, size=76 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805B732C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x805B7334
    *(0x24 + r1) = r0; // stw @ 0x805B7338
    *(0x1c + r1) = r31; // stw @ 0x805B733C
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x805B7344
    r0 = *(0x263 + r4); // lbz @ 0x805B7348
    if (!=) goto 0x0x805b735c;
    /* li r3, -1 */ // 0x805B7354
    /* b 0x805b7390 */ // 0x805B7358
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (==) goto 0x0x805b7374;
    /* li r3, 0 */ // 0x805B736C
    /* b 0x805b7390 */ // 0x805B7370
    r3 = r31;
}
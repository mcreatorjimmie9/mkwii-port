/* Function at 0x80701B6C, size=200 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_80701B6C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80701B74
    r0 = *(0xae + r3); // lbz @ 0x80701B78
    if (!=) goto 0x0x80701b8c;
    /* li r3, 0 */ // 0x80701B84
    /* b 0x80701c30 */ // 0x80701B88
    r0 = *(0x64 + r3); // lbz @ 0x80701B8C
    if (==) goto 0x0x80701ba0;
    /* li r3, 0 */ // 0x80701B98
    /* b 0x80701c30 */ // 0x80701B9C
    /* li r0, 0 */ // 0x80701BA0
    /* mulli r0, r0, 0xc */ // 0x80701BA4
    r4 = r3 + r0; // 0x80701BA8
    r0 = *(0x72 + r4); // lbz @ 0x80701BAC
    if (!=) goto 0x0x80701bc0;
    /* li r3, 0 */ // 0x80701BB8
    /* b 0x80701c30 */ // 0x80701BBC
    /* li r0, 1 */ // 0x80701BC0
    /* mulli r0, r0, 0xc */ // 0x80701BC4
    r4 = r3 + r0; // 0x80701BC8
    r0 = *(0x72 + r4); // lbz @ 0x80701BCC
    if (!=) goto 0x0x80701be0;
    /* li r3, 0 */ // 0x80701BD8
    /* b 0x80701c30 */ // 0x80701BDC
    /* li r0, 2 */ // 0x80701BE0
    /* mulli r0, r0, 0xc */ // 0x80701BE4
    r4 = r3 + r0; // 0x80701BE8
    r0 = *(0x72 + r4); // lbz @ 0x80701BEC
    if (!=) goto 0x0x80701c00;
    /* li r3, 0 */ // 0x80701BF8
    /* b 0x80701c30 */ // 0x80701BFC
    r0 = *(0xb8 + r3); // lwz @ 0x80701C00
    if (<) goto 0x0x80701c14;
    if (<) goto 0x0x80701c1c;
    /* li r3, 0 */ // 0x80701C14
    /* b 0x80701c30 */ // 0x80701C18
    r3 = r3 + 0x18; // 0x80701C1C
    FUN_805E3430(r3, r3); // bl 0x805E3430
    /* neg r0, r3 */ // 0x80701C24
    r0 = r0 | r3; // 0x80701C28
    /* srwi r3, r0, 0x1f */ // 0x80701C2C
    r0 = *(0x14 + r1); // lwz @ 0x80701C30
}
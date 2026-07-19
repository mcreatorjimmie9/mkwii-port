/* Function at 0x808CED60, size=112 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_808CED60(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x808CED68
    FUN_808CEBD8(); // bl 0x808CEBD8
    if (<=) goto 0x0x808ced90;
    /* lis r3, 0 */ // 0x808CED78
    /* li r0, 0 */ // 0x808CED7C
    r3 = *(0 + r3); // lwz @ 0x808CED80
    r3 = *(0x98 + r3); // lwz @ 0x808CED84
    *(0x70 + r3) = r0; // stw @ 0x808CED88
    /* b 0x808cedc0 */ // 0x808CED8C
    if (>=) goto 0x0x808cedac;
    /* lis r3, 0 */ // 0x808CED94
    /* li r0, 1 */ // 0x808CED98
    r3 = *(0 + r3); // lwz @ 0x808CED9C
    r3 = *(0x98 + r3); // lwz @ 0x808CEDA0
    *(0x70 + r3) = r0; // stw @ 0x808CEDA4
    /* b 0x808cedc0 */ // 0x808CEDA8
    /* lis r3, 0 */ // 0x808CEDAC
    /* li r0, 2 */ // 0x808CEDB0
    r3 = *(0 + r3); // lwz @ 0x808CEDB4
    r3 = *(0x98 + r3); // lwz @ 0x808CEDB8
    *(0x70 + r3) = r0; // stw @ 0x808CEDBC
    r0 = *(0x14 + r1); // lwz @ 0x808CEDC0
    return;
}
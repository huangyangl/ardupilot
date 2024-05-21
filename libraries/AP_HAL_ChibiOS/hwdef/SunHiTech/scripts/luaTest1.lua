function update()
    -- local t32,th,tl=rtc:get_utc_usec32()
    -- gcs:send_text(0, string.format("false: t32,th,tl is %f, %d, %d\n", t32,th:toint(),tl:toint()))
    -- gcs:send_text(0, string.format("false: t32 is %f\n", t32))
end
return update, 5000
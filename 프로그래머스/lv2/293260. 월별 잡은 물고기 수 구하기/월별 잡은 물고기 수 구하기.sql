select COUNT(fish_type) FISH_COUNT, Month(time) MONTH from fish_info
group by Month(time)
order by Month(time)
;